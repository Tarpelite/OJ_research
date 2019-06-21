#include<stdio.h>
int zhishu(int);
int main()
{
    int n,i,b,c=0;
    scanf("%d",&n);
    if(1==n){printf("3"); return 0;}
    for(b=1+n;b<1000000;b++)
    {
        if(1==zhishu(b))
        {
            if(0==zhishu(n)&&0==c)
            {
                c=1;
                continue;
            }
            else
            {
                printf("%d",b);
                return 0;
            }
        }
    }
}

int zhishu(int a)
{
    int i=3;
    if((a%2)==1||a==2)
        while(i<=a/3)
        {
            if(((a%i)==0&&a!=i)||a==2)
                return 0;
            i=i+2;
        }
    else
        return 0;
    return 1;
}