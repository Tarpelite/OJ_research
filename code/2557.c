#include<stdio.h>
#include<stdlib.h>
 
#define N 100100
 
int main(void)
{
    int i,j;
    int prime[N+1];
 int x;
 scanf("%d",&x);
    for(i=2;i<=N;i++)
        prime[i]=1;
    for(i=2;i*i<N;i++)
    {
        if(prime[i]==1)
        {
            for(j=2*i;j<=N;j++)
            {
                if(j%i==0)
                    prime[j]=0;
            }
        }
    }
 
    for(i=2;i<N;i++)
    {
        if(prime[i]==1&&i>x)
        {
            printf("%d",i);
          return 0;  
        }
    }
}