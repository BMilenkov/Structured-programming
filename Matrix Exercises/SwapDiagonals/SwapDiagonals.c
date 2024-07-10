/*Да се напише програма во која се внесува квадратна матрица од цели броеви со максимална
големина од 10 х 10. Матрицата да се измени на таков начин што елементите од главната и
споредната дијагонала ќе си ги заменат своите места. На крај да се отпечати променетата матрица.
 */
#include <stdio.h>
#define MAX 10
int main() {
    int a[MAX][MAX], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j){
                temp = a[i][j];
                a[i][j] = a[i][n - 1 - i];
                a[i][n - 1 - i] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

