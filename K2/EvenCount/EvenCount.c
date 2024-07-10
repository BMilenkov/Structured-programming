//Од стандарден влез се чита природен број N (N <= 100), како и низа од позитивни цели броеви a[ ] со N елементи.
//Да се напише функција int par(a, n) која ќе го врати најмалиот елемент во низата кој се појавува парен број пати во низата.
// Доколку нема таков елемент, функцијата враќа вредност 0.
//Напишете програма што ќе ја повика функцијата par за внесената низа a[ ] и ќе го испечати најмалиот број којшто се појавува парен број пати во низата a[ ].
//Пример 1.
//Влез
//12 // бројот N на елементи
//1 3 4 5 3 1 4 5 5 3 2 3 // елементи на низата
//Излез
//Najmaliot element koj se pojavuva paren broj pati e 1 // овде функцијата par враќа вредност 1, а се печати оваа порака

#include <stdio.h>
#define MAX 100
void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void bubble_sort(int *a,int n){
    for(int i = 0;i < n;i++)
        for (int j = 0; j < n-i-1; j++) {
            if(a[j] > a[j+1])
                swap(&a[j],&a[j+1]);
        }
}
int par(int *a ,int n){
    for(int i = 0; i < n; i++){
        int counter = 0;
        for(int j = 0; j < n; j++) {
            if (a[i] == a[j])
                counter++;
        }
        if (counter % 2 == 0)
            return a[i];
    }
    return 0;
}
int main(){
    int a[MAX], n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d ",&a[i]);
    }
    bubble_sort(a, n);
    int s=par(a, n);
    if(!s)
        printf("Nitu eden element ne se pojavuva paren broj pati!");
    else
        printf("Najmaliot element koj se pojavuva paren broj pati e %d ", s);
    return 0;
}