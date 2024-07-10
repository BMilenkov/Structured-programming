//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
// Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
// Од тастатура се внесува природен број n ( n > 9).
// Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
// Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

#include <stdio.h>
int main()
{
    int broj,n,m,i;
    int temp,digit,reverse,br;
    scanf("%d", &broj);
    n=broj;
    if (broj>9) {
        for (i=(n-1); i>0; i--) {
            temp = i;
            br = 0;
            while (temp) {
                digit = temp % 10;
                reverse = (reverse * 10) + digit;
                temp /= 10;
                br++;
            }
            if (reverse % br == 0) {
                printf("%d", i);
                break;
            }
        }
    }
    else
        printf("Brojot ne e validen");
    return 0;
}
