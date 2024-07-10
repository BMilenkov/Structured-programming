//Во дадена датотека “broevi.txt” се запишани повеќе редови со броеви така што секој ред започнува со еден цел број (N>=1) што означува колку броеви следуваат по него во тој ред.
// Да се напише програма која на СИ за секој ред ќе го испечати бројот со најголема најзначајна цифра.
// Читањето на броеви завршува кога ќе се прочита 0.

#include <stdio.h>
#include <string.h>
#define MAX 100
void wtf() {
    FILE *f = fopen("broevi.txt", "w");
   // FILE *f = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\MSD\\broevi.txt", "w");
    char c;
    while((c = getchar()) != EOF) {
        fputc(c, f);
    }
    fclose(f);
}
int FirstDigit(int a){
    while(a>=10){
        a/=10;
    }
    return a;
}
int main()
{
    wtf();
    FILE *pok = fopen("broevi.txt","r");
    //FILE *pok = fopen("C:\\Users\\user\\SP 2023 C\\src\\K2\\MSD\\broevi.txt","r");
    int n,a;
    while(!feof(pok)){// SE DODEKA CITAS OD FILE!!!
        int maxDigit = 0, maxNumber = 0;
        fscanf(pok,"%d",&n);
        if( n==0)
            break;
        for(int i=0; i < n; i++){
            fscanf(pok,"%d",&a);
            int x = FirstDigit(a);
            if( x > maxDigit){
                maxDigit = x;
                maxNumber = a;
            }
        }
        printf("%d\n", maxNumber);
    }
    fclose(pok);
    return 0;
}