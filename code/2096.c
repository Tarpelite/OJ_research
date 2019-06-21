#include<stdio.h>
int main()
{
    int i,j,n,t;
    int flag=0;
    scanf("%d",&n);
    j=n+1;
    if(n==1)
        printf("2");
    while(j>n)
    {
        for(i=2;i<=(j/2);i++)
            {
             t=j%i;
             if(t==0)
                { flag=1;
                  break;
                }
             }
        if(flag==0)
               {
                printf("%d",j);
                break;}
        else
            {
                i=2;
                j++;
                flag=0;
            }
    }
    return 0;
}