//Цик-цак е број за кој што важи дека за секој пар соседни цифри, тие се наизменично поголеми односно помали една во однос на друга.
// На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
//a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
//Пр. 343, 4624, 6231209
//Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10 (броевите помали од 10 се игнорираат).
// Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cifra1,cifra2,broj,znak;
    while(scanf("%d",&broj))
    {
        int cikcak=1;
        if(broj>=10)
        {
            int temp = broj;
            cifra1 = temp%10;
            cifra2 = temp%100/10;
            if(cifra1>cifra2)
            {
                znak=1;
            }
            else
            {
                znak=0;
            }
            while(temp>9)
            {
                if(znak==1)
                {
                    if(cifra1<=cifra2)
                    {
                        cikcak=0;
                        break;
                    }
                }
                else
                {
                    if(cifra1>=cifra2)
                    {
                        cikcak=0;
                        break;
                    }
                }

                if(znak==1)
                {
                    znak=0;
                }
                else
                {
                    znak=1;
                }
                temp = temp/10;
                cifra1 = temp%10;
                cifra2 = temp%100/10;
            }
            if(cikcak==1)
            {
                printf("%d\n",broj);
            }
        }

    }
    return 0;
}