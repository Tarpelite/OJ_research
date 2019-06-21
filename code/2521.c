#include<stdio.h>
#include<math.h>
int ifz(int);
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;ifz(i)==0;i++)
    {

    }
    printf("%d",i);
}

int ifz(int x)
{
    int m;
    for(m=2;m<=sqrt(x);m++)
    {
        if(x%m==0)
        {
           return 0;

        }

    }
    return 1;
}