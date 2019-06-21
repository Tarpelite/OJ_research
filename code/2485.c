#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=n+1;i<=200000;i++)
    {
        int k=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                k++;
        }
        if(k==2)
            break;
    }
    printf("%d",i);
    return 0;
}