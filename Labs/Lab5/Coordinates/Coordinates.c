//Даден е правоаголник кој се наоѓа во првиот квадрант од координатниот систем и страните му се паралелни со оските.
// Правоаголникот се задава со координатите на долното лево и горното десно теме (темињата А и С) кои се цели броеви.
// Потоа, се внесуваат координатите на две точки. Вашата програма за секоја од двете точки на излез треба да отпечати DA,
// ако дадената точка лежи врз правоаголникот (во правоаголникот и на страните) и NE ако е надвор од него.

#include <stdio.h>
int main()
{
    int x1,y1,x2,y2,xa,ya,xc,yc;
    scanf("%d %d %d %d %d %d %d %d",&xa,&ya,&xc,&yc,&x1,&y1,&x2,&y2);
    if((x1>=xa && x1<=xc) && (y1>=ya && y1<=yc)){
        printf("DA\n");}
    else {
        printf("NE\n");
    }
    if((x2>=xa && x2<=xc) && (y2>=ya && y2<=yc)){
        printf("DA\n");
    }
    else {
        printf("NE\n");
    }
    return 0;
}


