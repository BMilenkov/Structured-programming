/*Да се напише програма која ќе прочита квадратна матрица со максимални димензии 100 х 100 и ќе
провери дали матрицата е магичен квадрат. Магичен квадрат е матрица чии што суми на елементи
по колони и редици имаат иста вредност.
Во матрицата од примерот сумата на елементите по сите колони и сите редови е 15. Дополнително
програмата треба да провери дали матрицата е специјален магичен квадрат односно сумата на
елементите од главната и споредната дијагонала е еднаков на сумата на елементите по колони и
редици.
*/

#include <stdio.h>
#define MAX 100
int main(){
    int matrix[100][100], n;
    scanf("%d",&n);
    for(int i=0; i < n;i++){
        for(int j=0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    int r = 0, k = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+=matrix[i][0];
    }
    for(int i = 0; i < n; i++){
        int sumRED = 0;
        for(int j=0; j < n; j++){
            sumRED+=matrix[i][j];
        }
        if(sumRED!=sum)
            r= 1 ;
    }
    for(int j = 0; j < n; j++){
        int sumKOL = 0;
        for(int i=0; i < n; i++){
            sumKOL+=matrix[i][j];
        }
        if(sumKOL!=sum)
            k = 1;
    }
    int sumGD = 0;
    int sumSD = 0;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                sumGD += matrix[i][j];
            if (i + j == n - 1)
                sumSD += matrix[i][j];
        }
    }

    if (r==0 && k==0)
        printf("Magicna matrica\n");
    if(sumSD==sum && sumGD==sum)
        printf("Specijalen magicen kvadrat");
    return 0;
}