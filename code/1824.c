#include <stdio.h>
int main()
{
    int n,m,i=0;

    scanf("%d",&n);
    while(1){
        n++;
        for(m=1;m<=n;m++){
            if(n%m==0)i++;
        }
        if(i==2)break;
        i=0;
    }
    printf("%d",n);
    return 0;
}