#include <stdio.h>

#define MAX 100

int main() {
    int n, m, a[MAX], temp[MAX];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &m);
    //SHIFT LEFT!!!!
    if (a[0] > 0) {
        for (int i = 0; i < n; i++) {
            temp[i] = a[(i + m) % n];
        }
        //nuli na izbeganite elementi!!!
        for (int i = n; i >= n - m; i--) {
            temp[i] = 0;
        }
    }
        //SHIFT RIGHT!!!!
    else if (a[0] < 0) {
        for (int i = 0; i < n; i++) {
            temp[(i + m) % n] = a[i];
        }
        //nuli na izbeganite elementi!!!
        for (int i = 0; i < m; i++) {
            temp[i] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    return 0;
}