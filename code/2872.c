#include <stdio.h>

int N(int l,int r,int n,int A[]){
    int S=0;
    for(int i=l;i<=r;i++){
        S+=A[i];
    }
    return S%n;
}

int M(int l,int r,int n,int A[]){
    int S=1;
    for(int i=l;i<=r;i++){
        S*=A[i];
        S%=n;
    }
    return S;
}

int H(int l,int r,int n,int A[]){
    int S=0;
    for(int i=l;i<=r;i++){
        S^=A[i];
    }
    return S;
}

int main(){
    int n,K,a,b;
    scanf("%d%d",&n,&K);
    int A[n],l[n],r[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(int i=0;i<K;i++){
        scanf("%d%d",&l[i],&r[i]);
    }
    for(int i=0;i<K;i++){
        a=N(l[i],r[i],n,A);
        b=M(l[i],r[i],n,A);
        printf("%d",H(a<b?a:b,a<b?b:a,n,A));
        if(i<K-1)
        printf("\n");
    }
    return 0;
}