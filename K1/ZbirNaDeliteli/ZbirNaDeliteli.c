//Од стандарден влез се чита еден природен број n.
// Меѓу природните броеви помали од n, да се најде оној чиј што збир на делителите е најголем.
// Во пресметувањето на збирот на делителите на даден број, да не се зема предвид самиот број.

#include <stdio.h>
int main()
{
    int n,i,j,sum,sum1=0,broj;
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        sum=0;
        for (j=1;j<i;j++)
        {
            if (i%j==0)
            {
                sum+=j;
            }
        }
        if(sum>sum1){
            sum1=sum;
            broj=i;
        }
    }
    printf("%d",broj);
    return 0;
}