//Од стандарден влез се чита цел број N (N<=100) и потоа N низи од знаци.
// Низите знаци содржат букви, цифри и специјални знаци (без знаци за празно место),а секоја од нив не е подолга од 80 знаци.
//Да се напише програма со која што на стандарден излез ќе се отпечати најдолгата низа, којашто е палиндром (се чита исто од од лево на десно и од десно на лево)
// и што содржи барем еден специјален знак. Ако нема такви низи, се печати "Nema!".
// Ако има две или повеќе низи што го задоволуваат овој услов, се печати првата низа којашто го задоволува условот.
//
//Влез:
//9
//a!bcdedcb!a
//Kfd?vsvv98_89vvsv?dfK
//Ccsvsdvdfv
//342425vbbcb
//352!2353696969625
//gdg??dfg!!
//5336346644747
//8338736767867
//12344321
//Излез:
//Kfd?vsvv98_89vvsv?dfK
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cleanline(char *line) {
    if (line[strlen(line) - 1] == '\n') {
        line[strlen(line) - 1] = '\0';
    }
}
int isValid(char *line){
    int n = strlen(line);
    int ispalindrom = 1;
    int hasSC = 0;
    for(int i=0; i < n/2 ; i++){
        if( line[i] != line[n-i-1] )
            ispalindrom = 0;
    }
    for(int i=0; i < n; i++){
        if( isalnum(line[i] )==0)
            hasSC = 1;
    }
    return ispalindrom && hasSC;
}
int main(){
    int n;
    char maxline[81];
    int max = 0;
    scanf("%d\n ", &n);
    for(int i = 0 ; i < n; i++) {
        char line[81];
        fgets (line, sizeof(line), stdin);
        //cleanline(line);
        line[strlen(line)-1]='\0';
        if (isValid(line)){
            n = strlen(line);
            if(n > max){
                max = n;
                strcpy(maxline, line);
            }
        }
        //puts(line);
    }
    if(max != 0) {
        puts(maxline);
    }
    else
        printf("Nema! ");
    return 0;
}