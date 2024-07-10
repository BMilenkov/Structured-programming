/*Да се напише програма во која од тастатура се внесуваат елементите (целобројни вредности) на
матрица со димензии m х n (не поголеми од 100). Потребно е да се направи промена на матрицата
така што максималниот елемент ќе ја добие вредноста на сумата на останатите елементи во таа
редица.
 */

#include <stdio.h>
#define MAX 100
int main() {
    int a[MAX][MAX], rows,col;
    scanf("%d%d", &rows,&col);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int max= a[0][0], red, kolona;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if(a[i][j] > max){
                max = a[i][j];
                red = i;
                kolona = j;
            }
        }
    }
    int sum = 0;
    // namesto cela matrica mozhe da se izmine samo toj red!!
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (i == red) {
                sum += a[red][j];
            }
        }
    }
    a[red][kolona] = sum-max;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}