#include <stdio.h>
#include <stdlib.h>
int a[105];
int b[105];
int j,n;
int res;
int N(int l , int r){
    res = 0;
    for(j=l;j<=r;j++){
        res += a[j];
    }
    return res%n;
}
int M(int l , int r){
    res = 1;
    for(j=l;j<=r;j++){
        res = (res * (a[j] % n))%n;
    }
    return res;
}
int H(int l , int r){
    res = 0;
    for(j=l,res=a[j];j < r;j++){
        res = res ^ a[j+1];
    }
    return res;
}
int main()
{
    int K,l,r,i,l1,r1;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<K;i++){
        scanf("%d%d",&l,&r);
        l1 = N(l,r)>M(l,r)?M(l,r):N(l,r);
        r1 = N(l,r)<M(l,r)?M(l,r):N(l,r);
        b[i] = H(l1,r1);
    }
    for(i=0;i<K;i++){
        printf("%d\n",b[i]);
    }
    return 0;
}