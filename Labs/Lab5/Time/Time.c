//Се внесува време во македонска форма (3 вредности: час - од 0 до 23, минути – од 0 до 59, и секунди – од 0 до 59).
// Да се презентира времето во интернационална форма во која за 0 часот стои 12, од 13 часот до 23 се всушност од 1 до 11,
// а на крајот стои AM доколку времето е претпладне (од 0:00:00 до 11:59:59) и PM доколку времето е попладне (од 12:00:01 до 23:59:59).
// За времето на пладне (12:00:00) после него се печати NOON.
//Формата за точен излез може да се види во тест примерите.

#include <stdio.h>
int main(){
    int cas,minuti,sekundi;
    scanf("%d",&cas);
    scanf("%d",&minuti);
    scanf("%d",&sekundi);
    int vreme;
    if(cas==0){
        vreme=cas+12;
        printf("%02d:%02d:%02dAM\n",vreme,minuti,sekundi);
    }
    else if(cas>=13 && cas<=24){
        vreme=cas-12;
        printf("%02d:%02d:%02dPM\n",vreme,minuti,sekundi);
    }
    else if(cas==12 && cas >=12){
        vreme=cas;
        printf("%02d:%02d:%02dNOON\n",vreme,minuti,sekundi);

    }
    else if(cas<=12 && cas>=1){
        vreme=cas;
        printf("%02d:%02d:%02dAM\n",vreme,minuti,sekundi);
    }
    return 0;
}
