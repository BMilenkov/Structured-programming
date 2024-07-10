//Oд стандарден влез се вчитува еден цел број X, димензии на матрица M и N (цели броеви), како и елементите на матрицата со димензии M x N (цели броеви).
// Да се напише програма што ќе ги промени редиците на матрицата на следниот начин:
//
//Ако збирот на елементите од редот е поголем од X, елементите на тој ред добиваат вредност 1
//Ако збирот на елементите од редот е помал од X, елементите на тој ред добиваат вредност -1
//Ако збирот на елементите од редот е еднаков на X, елементите на тој ред добиваат вредност 0
//Променетата матрица да се испечати на екран.

#include<stdio.h>
int main() {
    int x, n, m;
    scanf("%d", &x);
    scanf("%d%d", &m, &n);
    int i, j, a[100][100];
    for(i = 0; i < m; ++i) {
        for(j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    int suma, k;
    for(i = 0; i < m; ++i) {
        suma = 0;
        for(j = 0; j < n; ++j) {
            suma += a[i][j];
        }

        for(k=0;k < n;k++) {

            if(x > suma) {
                a[i][k] = -1;
            }

            if(x < suma) {
                a[i][k] = 1;
            }

            if(x == suma){
                a[i][k] = 0;
            }

        }
    }
    for(i = 0; i < m; ++i) {
        for(j = 0; j < n; ++j) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}