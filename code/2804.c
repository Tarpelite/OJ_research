#include <stdio.h>

int n2(int l, int r, int a[], int n){
    int i, sum = 0;
    for(i=l;i<r+1;i++){
        sum = sum + a[i];
    }
    sum = sum%n;
    return sum;
}
int m(int l, int r, int a[], int n){
    int i, k = 1;
    for(i=l;i<r+1;i++){
        k = (k * a[i])%n;
    }
    return k;
}
int h(int l, int r, int a[], int n){
    int i, k;
    k = a[l];
    for(i = l+1;i<r+1;i++){
        k = k ^ a[i];
    }
    return k;
}

int main()
{
    int n, k, l, r, N, M;
    int i;
    int a[1000],max[100],min[100], out[1000];
    scanf("%d%d", &n, &k);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<k;i++){
        scanf("%d%d", &l, &r);
        N = n2(l, r, a, n);
        M = m(l, r, a, n);
        if(M<N){
            max[i] = N;
            min[i] = M;
        }
        else {
            max[i] = M;
            min[i] = N;
        }
    }
    for(i=0;i<k;i++){
        out[i] = h(min[i], max[i], a ,n);
        printf("%d\n", out[i]);
    }
    return 0;

}