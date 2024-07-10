//Од стандарден влез се вчитува број N, а потоа и N цели броеви.
//Да се испечати на екран најголемата разлика помеѓу два последователно внесени броја.
//Да се реши без користење на низи!
//Објаснување на примерот:
//N=5, па се внесуваат 5 броја: 1,3,0,5,2. Разликите се соодветно:
//3-1 = 2
//0-3 = -3
//5-0 = 5
//2-5 = -3
//Најголема разлика е 5.5

#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int diff=0,
            prev=0;
    int number;
    int maxdiff;
    int flag=1;
    for(int i=0;i<N;i++){
        scanf("%d",&number);
        if(i==0) {
            prev=number;
            continue;
        }
        diff=number-prev;
        prev=number;
        if(flag){
            maxdiff=diff;
            flag=0;
        }
        if(diff>maxdiff){
            maxdiff=diff;
        }
    }
    printf("%d",maxdiff);
    return 0;
}