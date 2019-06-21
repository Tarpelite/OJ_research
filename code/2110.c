#include <stdio.h>
#include <stdlib.h>
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

int n;

int M(int l,int r,int *a){
    if(l==r)return a[r]%n;
    return ((a[r]%n)*M(l,r-1,a))%n;
}

int N(int l,int r,int *a){
    int i,k=0;
    for(i=l;i<=r;i++){
        k+=a[i];
    }
    return k%n;
}

int H(int l,int r,int *a){
    if(l==r)return a[r];
    return a[r]^H(l,r-1,a);
}

int main(){
    int k,i,l,r,p,m;
    scanf("%d %d",&n,&k);
    int x[n];
    for(i=0;i<n;i++)scanf("%d",&x[i]);
    for(i=0;i<k;i++){
        scanf("%d %d",&l,&r);
        p=N(l,r,x);
        m=M(l,r,x);
        printf("%d\n",H(min(p,m),max(p,m),x));
    }
}