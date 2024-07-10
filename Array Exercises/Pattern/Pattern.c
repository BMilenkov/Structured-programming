//*****
//****
//***
//**
//*

#include <stdio.h>
void pecati(int n,char znak) {
    if (n == 0) {
        printf("\n");
        return;
    } else {
        printf("%c",znak);
    }
        pecati(n - 1,znak);
}
void pattern(int a) {
    if (a == 0) {
        return;
    } else {
        pecati(a,'*');
    }
    pattern(a-1);
}
int main(){
int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}