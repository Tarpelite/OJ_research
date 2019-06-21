#include<stdio.h>
int main()
{
    int m ,n,a=1,b=1,sum,i,j;
    scanf("%d%d",&m,&n);
    for(i=m;i>m-n;i--){
        a=a*i;
    }
    for(j=n;j>1;j--)
    {
        b=b*j;
    }
    sum=a/b;
    printf("%d",sum);
}