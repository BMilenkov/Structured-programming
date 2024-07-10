//Од стандарден влез се чита цел број N (N<100) и потоа N низи од знаци.
// Низите знаци содржат букви, цифри и специјални знаци, а секоја од нив не е поголема од 50 знаци.
//Да се напише програма што ќе ги отпечати на екран сите низи од знаци во кои се содржи поднизата Substring_A1c  најмалку 2 пати
// (пр. A1c01АA1c92, 12A1cwwA1cxy, аA1cwA1cA1ccA1cxab) според редоследот како што се прочитани од влезот.
// При печатење на зборовите, сите алфабетски знаци треба да се испечатат со мали букви.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
void lower(char *s){
    for(int i=0;i<strlen(s);i++){
        s[i]=tolower(s[i]);
    }
}
int contains(char *line,char *subline){
    int counter=0;
    lower(line);
    for(int i=0;i<strlen(line)-2;i++){
        if(strncmp(line + i,subline,3)==0)
            counter++;
    }
    if(counter>=2)
        return 1;
    return 0;

}
int containsrecursive (char *line, char *subline){
    lower(line);
    char *res = strstr(line,subline);
    if(res== NULL)
        return 0;
    else
        return 1 + containsrecursive(res + 1, subline);

}//Rekurzivno nesaka!
int main(){
    char line[1000];
    char subline[4]="a1c";
    int n;
    scanf("%d ",&n);
    for(int i=0;i<n;i++){
        fgets(line,sizeof(line),stdin);
        line[strlen(line)-1]='\0';
        if(contains(line,subline)){
            puts(line);
        }
    }
    return 0;
}