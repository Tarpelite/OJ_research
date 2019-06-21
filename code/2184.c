#include <stdio.h>
#include <string.h>
#include <math.h>
long long a[10000005]={0};
int main()
{
    long long n,i,x,k,flag=0;
    scanf("%lld",&n);
    for (i=0; i<n; i++) {
        scanf("%lld",&x);
        a[x]++;
    }
    
    scanf("%lld",&k);
    for (i=10000000; i>=1; i--) {
        if (a[i]==0) {
            continue;
        }
        else if(flag!=k-1)
        {
            flag++;
        }
        else
        {
            printf("%lld %lld",i,a[i]);
            break;
        }
    }
    
    return 0;
    
}