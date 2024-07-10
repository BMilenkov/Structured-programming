//Од тастатура се внесуваат димензиите на една матрица (m,n <= 100), а потоа и елементите од матрицата.
// Да се трансформира матрицата така што средниот елемент во секоја редица ќе се замени со разликата (по апсолутна вредност) на сумата на елементите
// во првата половина од редицата и сумата на елементите во втората половина на редицата.
// Ако матрицата има парен број колони, се менува вредноста на средните два елемента. Средниот/те елемент/и влегува/ат во сумите (при непарен број на колони, средниот елемент влегува во двете суми!).
// Да се испечати на екран променетата матрица.
//Пример.
//Влез:
//m = 4
//n = 4
//1 3 -5 4
//2 10 2 10
//7 2 3 5
//3 2 10 3
//Излез:
//1 5 5 4
//2 0 0 10
//7 1 1 5
//3 8 8 3
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n;
    int matrix[100][100];
    scanf("%d %d ",&m,&n);
    for(int i=0; i <m; i++ ){
        for(int j = 0; j < n; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    if(n % 2) {
        for (int i = 0; i < m; i++) {
            int sum1N = 0, sum2N = 0;
            for (int j = 0; j <= n/2; j++) {
                sum1N += matrix[i][j];
            }
            for (int j = n/2; j < n; j++) {
                sum2N += matrix[i][j];
            }
            matrix[i][n/2] = abs(sum1N-sum2N);
        }
    }
    else{
        for (int i = 0; i < m; i++) {
            int sum1P = 0, sum2P = 0;
            for (int j = 0; j < n/2; j++) {
                sum1P += matrix[i][j];
            }
            for (int j = n/2; j < n; j++) {
                sum2P += matrix[i][j];
            }
            matrix[i][n/2]= abs(sum1P-sum2P);
            matrix[i][(n/2)-1]= abs(sum1P-sum2P);
        }
    }
    for(int i=0; i <m; i++ ){
        for(int j = 0; j < n; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}