#include <stdio.h>
int max(int a,int b){
    if (a>b) return a;
    else return b;
}
int min(int a,int b){
    if (a<b) return a;
    else return b;
}
int N(int l,int r,int n,int a[]){
    int he=0;
    int i;
    for (i=l; i<r+1; i++) {
        he=(he+a[i])%n;
    }
    return he;
}
int M(int l,int r,int n,int a[]){
    int ji=1;
    int i;
    for (i=l; i<r+1; i++) {
        ji=(ji*a[i])%n;
    }
    return ji;
}
int H(int l,int r,int n,int a[]){
    int huo=a[l];
    int i;
    for (i=l+1; i<r+1; i++) {
        huo=huo^a[i];
    }
    return huo;
}
int main(int argc, const char * argv[]) {
    int n,K,j=0,s,p;
    scanf("%d %d",&n,&K);
    int a[n],h[n],l[1000],r[1000];
    s=n;p=K;
    while (s--) {
        scanf("%d",&a[j]);
        j++;
    }
    j=0;
    while (p--) {
        scanf("%d %d",&l[j],&r[j]);
        j++;
    }
    for (j=0; j<K; j++) {
        h[j]=H(min(N(l[j],r[j],n,a),M(l[j],r[j],n,a)),max(N(l[j],r[j],n,a),M(l[j],r[j],n,a)),n,a);
        printf("%d\n",h[j]);
    }
    
    return 0;
}