//Да се напише програма која што од датотека со име "text.txt" ќе ги одреди и ќе ги испечати на стандарден излез:
//релативната фреквенција на сите мали букви
//релативната фреквенција на сите големи букви
//Релативната фреквенција на даден(и) карактер(и) се пресметува како количник на вкупното појавување на тој/тие карактер/и
// со вкупниот број на карактери во текстот (да се игнорираат празните места и специјалните знаци).
//Да не се менува функцијата writeToFile().

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void writeToFile() {
    FILE *f = fopen("text.txt", "w");
    char c;
    while((c = getchar()) != '#') {
        fputc(c, f);
    }
    fclose(f);
}
float relativeSmall(float small, float big){
    return small/(small+big);

}
float relativeBig(float small, float big){
    return big/(small+big);
}

int main() {
    writeToFile();
    char character;
    float small=0.0, big=0.0;
    FILE *input =fopen("text.txt", "r");
    while((character =fgetc(input)) !=EOF){
        if(isalpha(character)){

            if(islower(character))
                small++;

            else
                big++;
        }
    }

    printf("%.4f\n", relativeBig(small,big));
    printf("%.4f", relativeSmall(small,big));
    fclose(input);
    return 0;
}
