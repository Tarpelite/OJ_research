#include <stdio.h>

int main()
{
    int m,n;
    int i,j,c=1;
    scanf("%d%d",&m,&n);
if(n==0) {printf("0");return 0;}
    if(m==1) {printf("1");return 0;}
    for(i=1,j=m;i<=m-n;i++,j--)
    {
        c*=j;
        c/=i;
    }
    printf("%d",c);
    return 0;
}