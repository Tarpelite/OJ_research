#include <stdio.h>
#include <stdlib.h>
int zuhe(int m,int n)
{
    if(n==1)
    {
        return m;
    }
    if(n==m){
        return 1;
    }
    if(m<n||m<1||n<1){
        return 0;
    }
    return zuhe(m-1,n)+zuhe(m-1,n-1);
}

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",zuhe(m,n));
    return 0;
}