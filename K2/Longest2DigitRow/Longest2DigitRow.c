//Во дадена датотека dat.txt да се најде најдолгиот ред во кој има барем 2 цифри.
// На стандарден излез да се испечатат знаците од најдолгиот ред кои се наоѓаат помеѓу првата и последната цифра (заедно со тие 2 цифри) во истиот редослед.
// Доколку има повеќе такви редови се печати последниот.
// Се претпоставува дека ниту еден ред на датотеката не е подолг од 100 знаци.
//Пример.
//Влез:
//dat.txt:
//aaa123aa222aa2aaa23aaaaa22
//aaaaaaaaaaaa 23aaaa
//123 aaa aaa aaa aaa 12345 aaa aaa 2a
//Излез:
//123 aaa aaa aaa aaa 12345 aaa aaa 2

#include <stdio.h>
#include <string.h>
#include <ctype.h>
// ne menuvaj ovde
void wtf() {
    FILE *f = fopen("dat.txt", "w");
   //FILE *f = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\Longest2DigitRow\\dat.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int main() {
    wtf();
    FILE *pok = fopen("dat.txt","r");
    //FILE *pok = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\Longest2DigitRow\\dat.txt","r");
    char line[100], max_line[100], Final[100];
    int start=0, end=0, max=0, m_start = 0, m_end = 0 ;
    while((fgets(line,100,pok))!= NULL){
        int n = strlen(line);
        int flag = 0;
        for(int i = 0; i < n; i++ ){
            if(isdigit(line[i]))
            {
                if(!flag){
                    start = i;
                    flag = 1;
                }
                end = i;
            }
        }
        if(start!=end){
            if( n >= max){
                max = n;
                strcpy(max_line,line);
                m_start = start;
                m_end = end;
            }
        }
    }
    strncpy(Final, max_line+m_start,m_end - m_start+1);
    Final[m_end - m_start + 1 ] ='\0';
    printf("%s \n",Final);
    fclose(pok);
    return 0;
}