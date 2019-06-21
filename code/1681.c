#include<stdio.h>
int main()
{
    int m,n,i=0,j=0,a=1,b=1,c;
    scanf("%d%d",&m,&n);
    while(i<n)
    {
        a=a*(m-i);
        i++;
    }
    while(j<n)
    {
        b=b*(n-j);
        j++;
    }
    c=a/b;
    printf("%d",c);
    return 0;
}