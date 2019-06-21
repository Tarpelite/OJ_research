#include <stdio.h>
int f(int m)
{
    int i;
    if(m==1)
        return 0;
    for(i=2;i*i<=m;i++){
        if(m%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n , i ;
    scanf("%d",&n);
    for(i=1;;i++){
        if(f(n+i)==1){
            printf("%d", n+i);
            return 0;
        }
    }
    return 0;
}