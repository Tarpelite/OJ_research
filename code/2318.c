#include<stdio.h>
int main()
{
    int m,n,f=1,fm=1,i;
    scanf("%d %d",&n,&m);
    if(n==0||m==0)
        printf("0");
    else
    {   for(i=1;i<=m;i++)
            fm*=i;
        for(i=1;i<=m;i++)
            f*=n+1-i;
        printf("%d",f/fm);
    }
        return 0;

}