#include <stdio.h>
int main()
{
    int a[10000],b[105];
    int n,K,i,l,r,m=0,q,x=1,t,y;

    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++)scanf("%d",&a[i]);

    for(i=1;i<=K;i++){
        scanf("%d%d",&l,&r);
        for(q=l;q<=r;q++)m+=a[q];
        for(q=l;q<=r;q++)x=(x*(a[q]%n))%n;
        m=m%n;
        x=x%n;
        if(m<x){
            t=m;
            m=x;
            x=t;
        }
        y=a[x];
        for(q=x+1,r=m;q<=r;q++)y=y^a[q];
        b[i-1]=y;
        m=0;
        x=1;
    }

    for(i=0;i<K;i++)printf("%d\n",b[i]);
    return 0;

}