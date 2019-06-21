#include <stdio.h>
#define Max(a,b) a>b ? a:b
#define Min(a,b) a<b ? a:b
int main(){
    int n,K;
    int a[10001];
    scanf("%d%d",&n,&K);
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int N(int l,int r){
        if (r==l){
            return a[r];
        }
        else{
            return a[r]+N(l,r-1);
        }
    }
    int M(int l,int r){
        if (r==l){
            return a[r]%n;
        }
        else{
            return a[r]*M(l,r-1)%n;
        }
    }
    int H(int l,int r){
        if (r==l){
            return a[r];
        }
        else{
            return H(l,r-1)^a[r];
        }
    }
    int l,r;
    for (int i=0;i<K;i++){
        scanf("%d%d",&l,&r);
        printf("%d\n",H(Min(N(l,r)%n,M(l,r)%n),Max(N(l,r)%n,M(l,r)%n)));
    }
    return 0;
}