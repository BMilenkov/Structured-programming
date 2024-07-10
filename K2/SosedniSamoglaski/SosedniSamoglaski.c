//Дадена е текстуална датотека text.txt.
//Да се избројат и испечатат сите последнователни појавувања на соседни самогласки во датотеката.
// Појавата на големи и мали букви да се игнорира. Пронајдените парови самогласки да се испечатат на екран, секој во нов ред со мали букви.
// Потоа во нов ред се печати бројот на појавувања на паровите самогласки.
//Пример: за датотеката:
//IO is short for Input Output
//medioio medIo song
//        излез:
//io
//ou
//io
//oi
//io
//io
//6
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void writeToFile() {
//    FILE *f = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\SosedniSamoglaski\\text.txt", "w");
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}

int isVowel(char curr){
    char x = tolower(curr);
    if(x == 'a' || x == 'e'||x == 'i'||x == 'o'||x == 'u')
        return 1;
    return 0;
}
int main(){

    writeToFile();
//    FILE *input = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\SosedniSamoglaski\\text.txt", "r");
    FILE *input = fopen("text.txt","r");
    char curr,flag = 1;
    char prev;
    int counter = 0;
    while((curr = fgetc(input))!=EOF) {
        if (isVowel(curr) && flag) {
            prev = curr;
            flag = 0;
        } else if (!flag){
            if(isVowel(prev) && isVowel(curr)){
                printf("%c%c\n", tolower(prev), tolower(curr));
                counter++;
                prev=curr;
            }
            else if(!isVowel(curr)){
                flag = 1;
                prev = curr;
            }
        }
    }
    printf("%d\n",counter);
    fclose(input);
    return 0;
}
