//Од тастатура се внесуваат димензиите на една матрица (m, n <= 100), а потоа и елементите од матрицата.
// Да се генерира низа (со најмногу m) така што секој елемент од низата се добива со наоѓање на елементот
// во секоја редица од матрицата што е најоддалечен од аритметичката средина во рамки на таа редица.
// Ако постојат повеќе елементи што се најоддалечени од аритметичката средина, тогаш се зема предвид првиот.
// Редоследот на запишување на елементите во низата одговара на редоследот на редиците.
//Пример:
//Влез:
//3 6
//1 2 2 3 4 5
//1 1 2 2 3 3
//1 2 3 4 5 6
//Излез:
//5 1 1
#include<stdio.h>
int main() {
    int i,j,m,n;
    float a[100][100];
    int array[100];
    scanf("%d %d",&m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j <n; j++) {
            scanf("%f", &a[i][j]);
        }
    }
    for (i= 0; i <m; i++) {
        float sumR = 0.0;
        int flag=1;
        float original;
        int most_distant;
        for (int j = 0; j < n; j++) {
            sumR += a[i][j];
        }
        float as =(float)(sumR)/n;
        for (int j=0;  j<n; j++) {
            float razlika=as-a[i][j]*1.0;
            if (razlika < 0 )
                razlika*=(-1);
            if(flag){
                most_distant=a[i][j];
                original=razlika;
                flag=0;
            }
            else if(flag==0){
                if(razlika>original){
                    original=razlika;
                    most_distant=a[i][j];
                }
            }
        }
        array[i]=most_distant;
    }
    for (i=0; i<m; i++)
        printf("%d ",array[i]);
    return 0;
}