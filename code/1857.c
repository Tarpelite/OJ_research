#include<stdio.h>
int main()
{
    int m,n,s,a=1,b=1,i,j;
    scanf("%d%d",&m,&n);
    if(m<n)
        return -1;
    else if(m>=n){
        for(i=m;i>(m-n);i--){
            a=a*i;
        }
        for(j=1;j<=n;j++){
            b=b*j;
        }
        s=a/b;
       printf("%d",s);
    }
    return 0;
}