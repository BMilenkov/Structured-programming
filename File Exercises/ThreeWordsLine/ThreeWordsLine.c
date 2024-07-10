
/*
Да се напише програма која за дадена текстуална датотека ќе ги изброи редовите кои содржат
најмалку три збора. Овој број да се отпечати во друга датотека. Името на влезната и излезната
датотека се задаваат од командна линија, а доколку не се зададени да се испечати начин на
употреба на програмата. Зборовите содржат букви и цифри а се одделени со бланко или
специјални знаци.
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
    char line[100];
    int in_word = 0, WordCounter = 0, lineCondition = 0 ;
    FILE *input = fopen("C:\\Users\\user\\SP 2023 C\\src\\File Exercises\\ThreeWordsLine\\input1.txt","r");
    FILE *output = fopen("C:\\Users\\user\\SP 2023 C\\src\\File Exercises\\ThreeWordsLine\\output1.txt","w");
    while((fgets(line,100,input))!=NULL){
        int n = strlen(line);
        WordCounter = 0;
        line[strlen(line)-1]='\0';
        for(int i = 0; i < n; i++){
            if(isalnum(line[i])){
                in_word = 1;
            }
            else{
                WordCounter++;
                in_word = 0;
            }
        }
        if(WordCounter > 2 ){
            lineCondition++;
        }
    }
    fprintf(output,"%d",lineCondition);
    fclose(input);
    fclose(output);
    return 0;
}