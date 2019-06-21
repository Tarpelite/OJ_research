#include <stdio.h>
int C(int m,int n);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int r;
    r = C(m,n);
    printf("%d",r);
    return 0;
}
int C(int m,int n){
    if(m == n)
        return 1;
    if(n == 1)
        return m;
    return C(m - 1,n)+C(m - 1,n - 1);
}