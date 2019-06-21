#include <stdio.h>
#include <stdlib.h>
int num[10000001];

int main()
{
    int n,i,a,k,b=1;

    scanf("%d",&n);

    for(i=1;i<=n;i++){
        scanf("%d",&a);

        num[a]++;
    }
    scanf("%d",&k);

    for(i=10000001;i>0,b<=k;i--)
        if(num[i]!=0)
            b++;
    printf("%d %d",i+1,num[i+1]);

    return 0;
}