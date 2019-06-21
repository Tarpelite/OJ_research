#include <stdio.h>

int main()
{
    int a[100],n,m,k,l,r,i,b=0,c=1,max,min;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    while(k--){
        scanf("%d %d",&l,&r);
        for(i=l;i<=r;i++){
            b+=a[i];
            c*=a[i];
            b%=n;
            c%=n;
        }
        max=b>c?b:c;
        min=b<c?b:c;
        m=a[min];
        for(i=min+1;i<=max;i++){
            m=m^a[i];
        }
        printf("%d\n",m);
        b=0;
        c=1;
    }
}