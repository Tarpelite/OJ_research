#include<stdio.h>
int main()
{
    int m,n,fz=1,fm=1,i;
    scanf("%d %d",&n,&m);
    if(n==0||m==0)
        printf("0");
    else
    {   for(i=1;i<=m;i++)
            fm*=i;
        for(i=1;i<=m;i++)
            fz*=n+1-i;
        printf("%d",fz/fm);
    }
        return 0;

}