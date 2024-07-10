//Во датотеката podatoci.txt се запишани редови со низи од знаци (секој не подолг од 80 знаци).
//
//Од стандарден влез се читаат два знака z1 и z2. Да се напише програма со која на стандарден излез ќе се испечатат поднизите
// од секој ред од датотеката составени од знаците што се наоѓаат меѓу z1 и z2 (без нив). Секоја подниза се печати во нов ред.
//
//Се смета дека секој ред од датотеката точно еднаш ги содржи знаците z1 и z2, знакот z1 секогаш се наоѓа пред знакот z2, а меѓу z1 и z2 секогаш има барем еден знак.

#include <stdio.h>
#include <string.h>
void wtf() {
    FILE *f = fopen("podatoci.txt", "w");
    //FILE *f = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\Podatoci\\podatoci.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
int main()
{
    wtf();
    char line[81];
    char z1, z2;
    getchar();
    char subline[81];
    scanf("%c %c", &z1, &z2);
    FILE *pok = fopen("podatoci.txt", "r");
    //FILE *pok = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\Podatoci\\podatoci.txt", "r");
    while((fgets(line, 81, pok)) != NULL)
    {
        line[strlen(line)-1]= '\0';
        int n = strlen(line);
        int start = 0, end = 0, flag = 1;
        for (int i = 0 ; i < n ; i++){
            if (line[i] == z1) {
                if(flag)
                    start = i;
                flag = 0;
            }
            if( line[i]== z2){
                end = i;
                break;
            }
        }
        strncpy(subline, line + start + 1, end - start );
        subline[end - start -1] ='\0';
        printf("%s\n", subline);
        //for(int i =start + 1 ; i < end; i++)
        //  printf("%c", line[i]);
        //printf("\n");
    }
    fclose(pok);
    return 0;
}