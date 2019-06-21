#include<stdio.h>
int main(void){

    int n,i=1,m,j;
    scanf("%d",&n);
    while(i<500)
    {
        m=n+i;

        for(j=2;j<m;j++)
    {
        if(m%j==0)
        {
            break;
        }
    }

    if(j==m)
        {printf("%d",m);
        break;}
    i++;

    }
    return 0;
}