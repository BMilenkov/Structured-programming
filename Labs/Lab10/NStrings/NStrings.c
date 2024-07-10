//Од стандарден влез се вчитува бројот N, бројот K и знакот C. Потоа се вчитуваат N текстуални низи (секоја во нов ред).
//Да се испечатат на екран текстуалните низи кои го содржат знакот C точно K пати без разлика на големината на буквата.
//Ако нема такви низи, да се испечати порака NONE.

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100

int containsTheCharacter(char *line, char C, int K){
    int n =strlen(line);
    int counter=0;
    for(int j=0; j<n ;j++){
        if(tolower(line[j])== tolower(C)){
            counter++;
        }
    }
    if (counter==K)
        return 1;
    return 0;
}


int main(){
    int N,K;
    char C;
    int lineCounter=0;
    char line[MAX];
    scanf("%d ", &N);
    scanf("%d ", &K);
    scanf("%c ", &C);

    for(int i=0; i<N; i++){
        fgets(line, sizeof(line),stdin);
        line[strlen(line)-1]='\0';
        if(containsTheCharacter(line,C,K)){
            puts(line);
            lineCounter++;
        }
    }
    if(lineCounter==0)
        printf("NONE");
    return 0;


}