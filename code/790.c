#include <stdio.h>
int N(int l,int r,int *A,int n){
    int i,m=0;
    for(i=l;i<=r;i++){
        m=m+*(A+i);
    }
    return m%n;
}
int M(int l,int r,int *A,int n){
    int i,m=1;
    for(i=l;i<=r;i++){
        m=m*(*(A+i)%n);
        m=m%n;
    }
    return m;
}
int H(int l,int r,int *A){
    int i,m=0;
    for(i=l;i<=r;i++){
        m=m^(*(A+i));
    }
    return m;
}
int main() {
    int n,a,b,m,k,i=0;
    int A[10000];
    scanf("%d%d",&n,&k);
    m=n;
    while(n--){
        scanf("%d",&A[i]);
        i++;
    }
    int l,r,hold;
    while(k--){
        scanf("%d%d",&l,&r);
        a=M(l,r,A,m);
        b=N(l,r,A,m);
        if(a>b){
            hold=a;
            a=b;
            b=hold;
        }
        printf("%d\n",H(a,b,A));
    }
    return 0;
}