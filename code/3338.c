#include <stdio.h>
int main()
{
    int m, n, i, a=1, b=1;
    scanf("%d%d", &m, &n);
    if(m<1||n<1)
        a=0;
    if(m<n){
        printf("%d",m);
        return 0;
    }
    for(i=0;i<n;i++){
        a*=m-i;
        b*=i+1;
    }
    printf("%d",a/b);
    return 0;
}