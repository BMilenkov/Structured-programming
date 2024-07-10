//Од тастатура се внесуваат цели броеви се додека не се внесе нешто што не е цел број.
//Да се испечати на екран сумата на броевите во кои цифрите се подредени во опаѓачки редослед. Доколку нема такви броеви, да се испечати порака NEMA.
//Објаснување на примерот:
//Во првиот пример, нема ниту еден број во кој цифрите се подредени во опаѓачки редослед, па се печати NEMA.
//Во вториот пример, во 4321, 21 и 81, цифрите се подредени во опаѓачки редослед, па се печати нивната сума 4423.
#include<stdio.h>
int main()
{
    int number, temp, digit;
    int sum = 0, prev=0, opagacki = 1, Opagacki=0;
    while (scanf("%d", &number))
    {
        temp = number;
        opagacki = 1; //Pretpostavka deka e opagjacki 1=Opagjacki,0=Rastecki
        while (temp>0)
        {
            digit=temp%10;
            if(temp != number)
            {
                if (digit<=prev)
                {
                    opagacki=0;
                }
            }
            prev = digit;
            if(opagacki == 0)
                break;

            temp/=10;

        }
        if(opagacki)
        {
            Opagacki++;
            sum+=number;
        }

    }
    if(Opagacki>0)
        printf("%d",sum);
    else
        printf("NEMA");

    return 0;
}