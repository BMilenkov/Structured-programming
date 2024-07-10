//Од тастатура се внесуваат 3 производи во формат: цена, тип на данок, каде што цената е внесена како цел број,
// додека типот на данок се внесува како мала или голема буква, и притоа
//тип A или a изнесува 18%
//тип B или b изнесува 5%
//тип V или v изнесува 0%
//Да се испечати вкупното ДДВ кое што треба да се плати за тие производи. ДДВто се пресметува како процент од цената на самиот производ.

#include <stdio.h>
int main() {
    int cena1, cena2, cena3;
    float ddv1, ddv2, ddv3;
    char tip_na_podatok1, tip_na_podatok2, tip_na_podatok3;
    scanf("%d %c", &cena1, &tip_na_podatok1);
    scanf("%d %c", &cena2, &tip_na_podatok2);
    scanf("%d %c", &cena3, &tip_na_podatok3);
    if (tip_na_podatok1 == 'A' || tip_na_podatok1 == 'a') {
        ddv1 = (float) cena1 * 18 / 100;
    } else if (tip_na_podatok1 == 'b' || tip_na_podatok1 == 'B')
        ddv1 = (float) cena1 * 5 / 100;
    else if (tip_na_podatok1 == 'v' || tip_na_podatok1 == 'V') {
        ddv1 = (float) cena1 * 0 / 100;
    }
    if (tip_na_podatok2 == 'A' || tip_na_podatok2 == 'a') {
        ddv2 = (float) cena2 * 18 / 100;
    } else if (tip_na_podatok2 == 'b' || tip_na_podatok2 == 'B') {
        ddv2 = (float) cena2 * 5 / 100;
    } else if (tip_na_podatok2 == 'v' || tip_na_podatok2 == 'V') {
        ddv2 = (float) cena2 * 0 / 100;
    }
    if (tip_na_podatok3 == 'A' || tip_na_podatok3 == 'a') {
        ddv3 = (float) cena3 * 18 / 100;
    } else if (tip_na_podatok3 == 'b' || tip_na_podatok3 == 'B') {
        ddv3 = (float) cena3 * 5 / 100;
    } else if (tip_na_podatok3 == 'v' || tip_na_podatok3 == 'V') {
        ddv3 = (float) cena3 * 0 / 100;
    }
    printf("%.2f", ddv1 + ddv2 + ddv3);
    return 0;
}