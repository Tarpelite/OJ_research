#include <stdio.h>

unsigned long long a[21]={1};

int  main(){
    unsigned long long ans=1;
    int i,m,n;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++){
        ans*=i;
        a[i]=ans;
    }
    printf("%llu\n",a[n]/a[m]/a[n-m]);
    return 0;
}