#include<stdio.h>
int is_zs(int x);
int main()
{
    int n;
    scanf("%d",&n);
    int i=n+1;
    while(!is_zs(i))
    {
        i++;
    }
    printf("%d",i);
    return 0;
}


int is_zs(int x)
{
    if(x==1) return 0;
    for(int now=2;now*now<=x;now++)
        {
            if(x%now==0) return 0;
        }
    return 1;
}