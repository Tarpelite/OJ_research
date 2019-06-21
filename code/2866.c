#include<stdio.h>
int main()
{
    int n,m,i=1,k=0,mod;
    scanf("%d",&n);
    m=n+1;
    while(m!=0)
    {
        while(m!=0)
        {
            mod=m%i;
            if(mod==0)
                k++;
            i++;
            if(i==m)
                break;
        }
    if(k==1)
        break;
    i=1;
    k=0;
    m++;
    }
    printf("%d",m);
    return 0;

}