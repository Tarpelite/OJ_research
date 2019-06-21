#include<stdio.h>
int ge(int);
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n+1;i<=100100;i++)
    {
        if(n==0)
        {
            printf("2");
            break;
        }
        if(ge(i)==0)
        {
            printf("%d",i);
            break;
        }
    }
}

int ge(int shu)
{
    int n=0;
    int i;
    for(i=2;i<shu;i++)
    {
        if(shu%i==0)
        {
            n=i;
            break;
        }
    }
    return n;
}