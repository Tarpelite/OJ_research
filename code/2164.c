#include<stdio.h>
int f(int x)
{
    if(x==2||x==3)
        return 1;
    else
    {
        for(int m=2;m<x/2;m++)
            if(x%m==0)
                return 0;
        return 1;
    }
}
int main()
{
    int n,i,j;
    scanf("%d",&n);
    i=n+1;
    /*if(n==1)
    {printf("2");return 0;}
    else if(n==2)
    {
        printf("3");return 0;
    }*/
if(n==3)
    {printf("5");return 0;}
    while(1)
    {
        if(f(i)==1)
            {printf("%d",i);
            return 0;}
        i++;
    }





}