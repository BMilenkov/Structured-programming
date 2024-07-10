//Да се дефинираат функциите:
//divisibleByK (int number, int k) - која ќе враќа 1 доколку бројот k е делител на бројот number, a 0 во спротивно
//nextDivisibleByK (int number, int k) - која ќе го врати првиот број поголем од number кој е делив со k. Да се употреби повик до divisibleByK во ова функција.
//Да не се менува main функцијата!
//Објаснување на примерот: Во секоја линија лево од стрелката се печати секој број од интервалот од [10,20], а десно од стрелката се печати наредниот број поголем од бројот лево којшто е делив со бројот k.
//Бонус: Направете ја функцијата nextDivisibleByK рекурзивна.

#include <stdio.h>
int divisibleByK(int number,int k){
    if(number%k==0)
        return 1;
    else
        return 0;
}
int nextDivisiblebyK(int number,int k){
    if(divisibleByK(number,k))
        return number;
    else
        return nextDivisiblebyK(number + 1, k);
}
int main(){
    int i,m,n,K;
    scanf("%d%d%d",&n,&m,&K);
    for (i =n;i <=m;i++) {
        printf("%d -> %d\n",i, nextDivisiblebyK(i + 1,K));
    }
    return 0;
}

