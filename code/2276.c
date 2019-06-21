#include<stdio.h>

#define max(x,y)(x>y?x:y)

#define min(x,y)(x<y?x:y)

int N(int l,int r,int a[10000],int n){

    int i,sum=0;

    for(i=l;i<=r;i++){
    sum=(sum%n +a[i]%n);
    }

    return sum%n;

}

int M(int l,int r,int a[10000],int n){

    int i,sum=1;

    for(i=l;i<=r;i++){
    sum=(sum%n)*(a[i]%n);
    }

    return sum%n;

}

int H(int l,int r,int a[10000],int n){

    int i,sum=1;

    sum=a[l];

    for(i=l+1;i<=r;i++){
    sum=sum^a[i];
    }

    return sum;

}

int main(){

    int n,k,i,a[10000],l,r,i1;

    scanf("%d%d",&n,&k);

    for(i=0;i<n;i++){
      scanf("%d",&a[i]);
    }

    for(i1=0;i1<k;i1++){
    scanf("%d%d",&l,&r);
    printf("%d\n",H(min(N(l,r,a,n),M(l,r,a,n)),max(N(l,r,a,n),M(l,r,a,n)),a,n));
    }

}