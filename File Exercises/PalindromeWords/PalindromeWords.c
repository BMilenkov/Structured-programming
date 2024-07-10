//Да се напише програма кој за дадена датотека ќе ги изброи и отпечати зборовите палиндроми. Да
//не се прави разлика меѓу големи и мали букви. Зборовите се составени само од букви, а меѓусебно
//се одвоени со најмалку еден специјален знак, цифра или празно место. Името на влезната датотека
//се задава од командна линија, а доколку не е зададено да се испечати порака за грешка. Во
//датотеката нема зборови подолги од 10 букви.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrom(char *line) {
    int n = strlen(line);
    for (int i = 0; i < n / 2; i++) {
        if (line[i] != line[n - i - 1])
            return 0;
    }
    return 1;
}

int main() {
    FILE *input = fopen("C:\\Users\\user\\SP 2023 C\\src\\File Exercises\\PalindromeWords\\branko.txt", "r");
    char line[100];
    char word[11];
    int counter = 0;
    int in_word = 0, j = 0;
    while ((fgets(line, 100, input)) != NULL) {
        line[strlen(line) - 1] = '\0';
        int n = strlen(line);
        for (int i = 0; i < n; i++) {
            if (isalpha(line[i])) {
                if (!in_word)
                    in_word = 1;
                word[j++] = line[i];
            } else if (in_word) {
                word[j] = '\0';
                if (palindrom(word)) {
                    printf("%s\n", word);
                    counter++;
                }
                j = 0;
                word[j] = '\0';
            }
        }
        if (in_word) {
            word[j] = '\0';
            if (palindrom(word)) {
                printf("%s\n", word);
                counter++;
            }
            j = 0;
            word[j] = '\0';
        }
    }
    printf("COUNTER:%d", counter);
    return 0;
}