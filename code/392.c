#include<stdio.h>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a<b?a:b)

int N(int a[],int l,int r,int n){
    int sum=0;
    for(int i=l;i<=r;i++){
        sum += a[i];
        sum %= n;
    }
    return sum;
}

int M(int a[],int l,int r,int n){
    int m=1;
    for(int i=l;i<=r;i++){
        m *= a[i];
        m %= n;
    }
    return m;
}

int H(int a[],int l,int r,int n){
    int b=a[l];
    for(int i=l+1;i<=r;i++){
        b = b^a[i];
    }
    return b;
}

int main(void)
{
    int n,K;
    scanf("%d%d",&n,&K);
    int a[n];
    int note;
    int l,r;
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    for(int j=0;j<K;j++){
        scanf("%d%d",&l,&r);
        note = H(a,min(N(a,l,r,n),M(a,l,r,n)),max(N(a,l,r,n),M(a,l,r,n)),n);
        printf("%d\n",note);
    }

    return 0;
}