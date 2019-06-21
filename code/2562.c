#include <stdio.h>
int main()
{
    int m,n,a=1,b=1,i,j,c;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;i++){
        a*=(m-i);}
    for(j=0;j<n;j++){
        b*=(n-j);}

    c=a/b;
    printf("%d",c);
    return 0;
}