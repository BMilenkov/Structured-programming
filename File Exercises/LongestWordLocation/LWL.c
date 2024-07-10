//Да се напише програма која од дадена датотека ќе го најде најголемиот збор. Тој збор, редот,
//бројот на редот и бројот на знаци во зборот да се испечатат во излезна датотека чие име се задавa
//во командната линија заедно со името на влезната датотека од која се чита.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    FILE *input = fopen("C:\\Users\\user\\SP 2023 C\\src\\File Exercises\\LongestWordLocation\\vlezna.txt", "r");
    FILE *output = fopen("C:\\Users\\user\\SP 2023 C\\src\\File Exercises\\LongestWordLocation\\izlezna.txt", "w");
    char line[81], word[81] ,max_word[81], max_line[81];
    int line_number = 0, maxline_number = 0, in_word = 0, i, j=0, max_char = 0;
    max_word[0] = '\0';
    max_line[0] = '\0';
    while(fgets(line,81, input) != NULL){
       line[strlen(line)-1]= '\0';
        int n = strlen(line);
        line_number++;
        for(i = 0; i < n ; i++){
             if(isalpha(line[i])){
                 in_word = 1;
                 word[j++] = line[i];
             }
             else
                 if(in_word){
                    in_word = 0;
                    word[j] = '\0';
                    if( j > max_char){
                        max_char = j;
                        strcpy(max_word,word);
                        strcpy(max_line,line);
                        maxline_number = line_number;
                    }
                    j = 0;
                    word[j] = '\0';
                 }
            }
        if(in_word){
            word[j] = '\0';
            if( j > max_char){
                max_char = j;
                strcpy(max_word,word);
                strcpy(max_line,line);
                maxline_number = line_number;
            }
            j = 0;
            word[j] = '\0';
            }
        }
    fprintf(output,"Zbor: %s\nReden broj: %d\nRed: %s\nVkupno znaci:%d",max_word, maxline_number, max_line, max_char);
    fclose(input);
    fclose(output);
    return 0;
}