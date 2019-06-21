#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=n+1;

    while(i<=100003)
    {
       for(j=2;j<i;j++)
       {
           if(i%j==0)
            break;
       }
       if(i==j)
       {
           printf("%d",i);
           break;
       }
       i++;
    }
    return 0;
}