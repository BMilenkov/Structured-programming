//Дадена е текстуална датотека (livce.txt) која претставува ливче во спортска обложувалница.
//На почетокот во датотеката, во посебен ред е запишана сумата на уплата (цел број).
//Потоа во секој ред од датотеката е запишан по еден тип во следниот формат:
//ab12 1 1.25
//Првиот број е шифрата на типот (низа од знаци која не е подолга од 9 знаци), вториот број е типот (може да биде 1, 0 или 2) додека третиот број е коефициентот (реален број).
//Ваша задача е да се испечати типот со најголем коефициент како и можната добивка на ливчето. Доколку има повеќе типови со ист максимален коефициент, да се испечати првиот.
//Можната добивка се пресметува како производ на сите коефициенти со сумата на уплата.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
void wf() {
    FILE *f = fopen("livce.txt", "w");
    //FILE *f = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\Ticket\\livce.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
    wf();
    FILE *pok = fopen("livce.txt", "r");
   // FILE *pok = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\Ticket\\livce.txt", "r");
    int tip, maxTip;
    char sifra[10], maxSifra[10];
    float  max=0.0, koeficient , uplata;
    fscanf(pok,"%f",&uplata);
    while(fscanf(pok,"%s %d %f",sifra,&tip,&koeficient)!= EOF){
        if(koeficient > max){
            max = koeficient;
            strcpy(maxSifra,sifra);
            maxTip = tip;
        }
        uplata*=koeficient;
    }
    printf("%s %d %.2f\n%.2f",maxSifra, maxTip, max, uplata);
    fclose(pok);
    return 0;
}