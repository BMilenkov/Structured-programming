//Да се напише програма која ќе споредува дали збирот на парните брови од левата половина на
//една матрица е еднков со збирот на непарните брови од десната половина на матрицата.

#include <stdio.h>
#define MAX 100
int main(){
    int a[MAX][MAX];
    int rows,col;
    scanf("%d%d", &rows,&col);
    for(int i = 0; i< rows;i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int lefsum=0, rightsum = 0;
    for(int i = 0; i < rows;i++) {
        for (int j = 0; j < col/2; j++) {
           if(a[i][j]%2==0){
               lefsum+=a[i][j];
           }
        }
        for (int j = (col+1)/2; j < col ; j++) {
            if(a[i][j]%2){
                rightsum+=a[i][j];
            }
        }
    }
    if (lefsum==rightsum)
        printf ("Matricata go ispolnuva baraniot uslov.\n");
    else
        printf("Matricata ne go ispolnuva baraniot uslov.\n");
    return 0;
}