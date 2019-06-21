#include <stdio.h>
int N(int *a,int n,int l,int r){
    int i,ans=0;
    for(i=l;i<=r;i++){
        ans=(ans%n)+(a[i]%n);
    }
    return ans%n;
}

int M(int *a,int n,int l,int r){
    int i,ans=1;
    for(i=l;i<=r;i++){
        ans=(ans%n)*(a[i]%n);
    }
    return ans%n;
}

int H(int *a,int n,int l,int r){
    int i,ans=a[l];
    for(i=l+1;i<=r;i++){
        ans^=(a[i]);
    }
    return ans;
}
int max(int a,int b){
    return a>b?a:b;
}
int min(int a,int b){
    return a<b?a:b;
}

int main()
{
    int n,nn,k,i=0,l,r,a[10000];
    scanf("%d%d",&n,&k);
    nn=n;
    while(n--)
        scanf("%d",&a[nn-n-1]);
    k--;
    scanf("%d%d",&l,&r);
    printf("%d",H(a,nn,min(N(a,nn,l,r),M(a,nn,l,r)),max(N(a,nn,l,r),M(a,nn,l,r))));
    while(k--){
        scanf("%d%d",&l,&r);
        printf("\n%d",H(a,nn,min(N(a,nn,l,r),M(a,nn,l,r)),max(N(a,nn,l,r),M(a,nn,l,r))));
    }
    return 0;
}