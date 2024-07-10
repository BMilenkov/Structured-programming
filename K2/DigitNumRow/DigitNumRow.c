//Да се напише програма во која од дадена датотека со име "input.txt" за секој ред ќе се отпечати бројот на цифри во тој ред,
// знакот :, па самите цифри подредени според ASCII кодот во растечки редослед.
// Редовите во датотеката не се подолги од 100 знаци.

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
void wtf() {
    FILE *f = fopen("input.txt", "w");
   // FILE *f = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\DigitNumRow\\input.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
void bubble_sort(int *array, int N){
    int temp;
    for(int i=0 ; i < N; i++){
        for(int j = 0; j < N-i-1; j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;

            }
        }
    }
}
int main() {
    wtf();
    char line[MAX];
    int array[MAX], j,N;
    FILE *pok = fopen("input.txt", "r");
    //FILE *pok = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\DigitNumRow\\input.txt", "r");
    while((fgets(line,MAX,pok)) != NULL){
        j=0, N=0;
        line[strlen(line)-1]= '\0'; //CLEAN METHOD!!!
        int n = strlen(line);
        for( int i = 0; i < n; i++){
            if(isdigit(line[i])) {
                array[j] = line[i]-'0';
                j++;
            }
        }
        int N = j ;
        printf("%d:",j);
        bubble_sort(array,N);
        for(int i = 0 ;i < N; i++){
            printf("%d", array[i]);
        }
        printf("\n");
    }
    fclose(pok);
    return 0;
}