//Од стандарден влез да се прочита една низа од знаци со најмногу 100 карактери. Да се трансформира низата така што левата и десната половина од стрингот ќе си ги сменат местата.
//Напомена: Сите тест примери ќе имаат парен број на знаци.

#include <stdio.h>
#include <string.h>
#define MAX 100
int main(){
    char line[MAX];
    char tempLine[MAX];
    fgets(line,sizeof(line),stdin);
    line[strlen(line)-1]='\0';
    strcpy(tempLine,line+strlen(line)/2);
    strncat(tempLine,line,strlen(line)/2);
    puts(tempLine);
    return 0;

}