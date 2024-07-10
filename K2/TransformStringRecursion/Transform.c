//Од стаднарден влез се читаат N низи од знаци (стрингови) не подолги од 80 знаци. На почетокот на програмата се читаат два цели броеви:
//N - бројот на низи од знаци кои ќе се читаат и
//X - поместување.
//Секоја од вчитаните низи од знаци треба да се трансформира на тој начин што секоја од малите и големите букви (a-z, A-Z) се заменува со истата буква поместена X места понапред во азбуката (a-z).
// Ако се надмине опсегот на буквите во азбуката, се продолжува циклично од почетокот на азбуката. Трансформираната низа да се отпечати на СИ.
//Трансформацијата да се имплементира со посебна рекурзивна функција.
//Пример:
//
//Welcome -> трансформирано со поместување 5 -> Bjqhtrj
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void transform(char *line, int X){
    int n = strlen(line);
    for(int i = 0;i < n;i++){
        if(isalpha(line[i])){
            if (islower(line[i])){
                if((line[i] + X) > 'z'){
                    int razlika = 'z'-line[i];
                    line[i] = (X-razlika)+'a'-1;
                }
                else {
                    line[i] = line[i] + X;
                }
            }
            if (isupper (line[i])){
                if((line[i] + X) > 'Z'){
                    int razlika = 'Z'-line[i];
                    line[i] = (X-razlika)+'A'-1;
                }
                else {
                    line[i] = line[i] + X;
                }
            }
        }
    }
}
int main () {
    int N,X;
    scanf("%d %d ",&N,&X);
    char line[81];
    for(int i=0; i < N; i++){
        fgets(line,80,stdin);
        line[strlen(line)-1] = '\0';
        transform(line,X);
        printf("%s\n",line);
    }
    return 0;
}