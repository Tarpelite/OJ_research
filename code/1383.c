#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,a=1,b=1;
    int i;
    scanf("%d%d",&m,&n);
    for(i=0;i<n;++i){
        a = a*(m-i);
        b = b*(n-i);
    }
    printf("%d\n",a/b);
    return 0;
}