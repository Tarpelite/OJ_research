#include<stdio.h>
int main()
{
    int n,i,j,z=0,a;
    scanf("%d",&n);
    for(i=n+1;; i++)
    {
        for(j=2,z=0; j<i; j++)
        {
            a=i%j;
            if(a==0)
                z++;
        }
        if(z==0)
        {
            printf("%d",i);
            return 0;
        }
        else
            continue;
    }
}