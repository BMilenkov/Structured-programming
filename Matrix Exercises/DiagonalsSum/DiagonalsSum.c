
/*Да се напише програма која ќе прочита квадратна матрица со максимални димензии 100 х 100 и ќе
провери дали збирот на цифрите на сите елементи од главната дијагонала е еднаков на збирот на
цифрите на сите елементи од споредната дијагонала. Пресметката на збирот на цифри за
елементите да се реализира со посебна рекурзивна функција.
*/

#include <stdio.h>
#define MAX 100
//RECURSIVE!!!
int sumacifri(int element){
    if(element==0)
        return 0;
        return element % 10 + sumacifri(element/10);
}
int main(){
    int a[MAX][MAX];
    int n;
    scanf("%d", &n);
    for(int  i =0 ; i<n; i++){
        for(int j= 0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    int GDSC = 0;
    int SDSC = 0;
    for(int  i = 0 ; i<n; i++){
        for(int j= 0; j<n; j++){
            int element = a[i][j];
           if(i==j){
               GDSC += sumacifri(element);
           }
           if(i+j==n-1){
               SDSC+= sumacifri(element);
           }
        }
    }
   if(GDSC==SDSC)
       printf("Zbirot na cifite na elementite od dvete dijagonali e ednakov!!!");
   else
       printf("Zbirot e razlichen!!!");
    return 0;
}