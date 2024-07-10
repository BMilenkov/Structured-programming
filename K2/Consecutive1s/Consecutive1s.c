//Да се напише програма која вчитува матрица со димензии MxN (макс. 100x100).
// На почетокот се внесуваат димензиите на матрицата, а потоа и елементите на матрицата кои се само вредностите 1 и 0.
// Програмата треба да изброи и отпечати на СИ во колку од редиците и колоните има барем 3 последователни елементи со вредност 1.

//Пример:
//1 1 1 0
//1 0 1 1
//1 0 0 1
//1 ред + 1 колона = 2

#include <stdio.h>
#define MAX 100
int main() {
    int m, n, a[MAX][MAX];
    int counter = 0, counter1 = 0,counter2=0;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d ", &a[i][j]);
        }
    }
    for (int i = 0; i < m; i++) {
        counter1 = 0;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 1){
                counter1++;
                if(counter1 == 3) {
                    counter++;
                    break;
                }
            }
            else
                counter1 = 0;
        }
    }
    for (int j = 0; j < n; j++) {
        counter2 = 0;
        for (int i = 0; i < m; i++) {
            if (a[i][j] == 1)
                counter2++;
            else
                counter2 = 0;
            if (counter2 == 3) {
                counter++;
                break;
            }
        }
    }
    printf("%d", counter);
    return 0;
}