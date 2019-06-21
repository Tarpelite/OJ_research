#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    int i,l,r,n,K;
    int a[10000];
    int b[100];
    scanf("%d%d",&n,&K);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    int j;
    for (i=0; i<K; i++) {
        scanf("%d%d",&l,&r);
        j = l;
        int p=0,N;
        while (j<=r) {
            p = a[j] + p;
            j++;
        }
        N = p % n;
        j = l;
        int M;
        int q=1;
        while (j<=r) {
            q = ((a[j]%n) * q)%n;
            j++;
        }
        M = q;
        if (N<M) {
            l=N;
            r=M;
        } else {
            l=M;
            r=N;
        }
        int H;
        if (r == l) {
            H = a[l];
        }
        else {
            H = a[l]^a[l+1];
            l=l+2;
            while (l<=r) {
                H = H^a[l];
                l++;
            }
        }
        b[i]=H;
    }
    for (i=0; i<K; i++) {
        printf("%d\n",b[i]);
    }
    return 0;
}