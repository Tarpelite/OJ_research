#include<stdio.h>
int main()
{
    int n,i,j,flag;
    scanf("%d",&n);
    for(i=n+1;i<200000;i++)
    {
        flag=1;
        for(j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }

        }
        if(flag==1)
            break;
    }
    printf("%d",i);
    return 0;
}