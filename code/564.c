#include <stdio.h>

int main()
{
    int m,n,a=1,b=1,c=1,i;
    scanf("%d %d",&m,&n);
    for(i=0;i<n;i++){
        a*=m-i;
        b*=i+1;
    }
    c=a/b;
    printf("%d",c);
}