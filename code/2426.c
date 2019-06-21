#include <stdio.h>
int main()
{
    int n,a=0,i;
    scanf("%d",&n);
    while(1){
        a=0;
        n++;
        for(i=2;i<n;i++){
            if(n%i==0)
                a++;
        }
        if(a==0) break;
    }
    printf("%d",n);
    return 0;
}