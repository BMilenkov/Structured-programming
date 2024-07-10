//Да се состави програма која ќе ги промени местата на редот со минимална сума на елементи и
//  редот со максимална сума на елементи во дадена целобројна матрица Amxn. Елементите на
//    почетната матрица се внесуваат од тастатура, а елементите на променетата матрица да се испечатат
//   на екран. Максималните димензии на матрицата се 10 x 10.

#include <stdio.h>
#define MAX 100
int main (){
    int matrix[MAX][MAX];
    int tempmatrix[MAX][MAX];
    int rows, col, maxred, minred;
    scanf("%d%d", &rows, &col);
    for(int i = 0; i < rows; i++){
        for( int j = 0; j < col; j++){
            scanf("%d" , &matrix[i][j]);
            tempmatrix[i][j] = matrix[i][j];
        }
    }
    int min = 0, max = 0;
    for(int j = 0 ; j < col; j++){
        min += matrix[0][j];
        max += matrix[0][j];
    }
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for( int j = 0; j < col; j++){
           sum+= matrix[i][j];
           if(sum > max){
               max = sum;
               maxred = i;
           }
           else if(sum < min){
               min = sum;
               minred = i;
           }
        }
    }
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (i == maxred)
                matrix[i][j] = tempmatrix[minred][j];
            if (i == minred)
                matrix[i][j] = tempmatrix[maxred][j];
        }
    }
    for(int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}