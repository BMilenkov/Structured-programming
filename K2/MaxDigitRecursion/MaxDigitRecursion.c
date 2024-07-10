//Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
//Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
// За секој од нив да се испечати максималната цифра во посебен ред.
//Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.
//Забелешка: ЗАБРАНЕТО е користење на глобални променливи.

#include <stdio.h>
int maxDigit(int a,int max,int max1){
    if(max1>max){
        max=max1;
        return maxDigit(a/10,max,a%10);
    }
    if(a==0)
        return max;
    else
        return maxDigit(a/10,max,a%10);
}
int main()
{
    int n;
    while(scanf("%d",&n)){
        printf("%d\n", maxDigit(n,0,0));
    }
    return 0;
}