//Да се напише програма која како параметар ќе го прима името на некоја датотека и ќе го отпечати
//бројот на редови во кои има по најмалку десет зборови. Зборовите се составени само од букви. Во
//секој ред има најмногу 80 знаци.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    FILE *input = fopen("C:\\Users\\user\\SP 2023 C\\src\\File Exercises\\RowWith10Words\\milenkov.txt", "r");
    char line[81];
    int in_word=0, j = 0;
    char word[80];
    int linecondition = 0;
    while((fgets(line,81,input))!=NULL){
        int n = strlen(line);
        line[strlen(line)-1]='\0';
        int counter = 0;
        for(int i = 0; i < n; i++){
            if(isalpha(line[i])){
                if(!in_word){
                    in_word = 1;
                    word[j++] = line[i];
                }
            }
            else if(in_word==1){
                counter++;
                in_word = 0;
                j = 0;
                word[j]='\0';
            }
        }
        if(counter>=10)
        linecondition++;
    }
    printf("%d", linecondition);
    return 0;
}