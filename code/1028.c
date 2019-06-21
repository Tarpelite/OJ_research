#include <stdio.h>
#include <stdlib.h>

int N (int, int, int s[], int);
int M (int, int, int s[], int);
int H (int, int, int s[], int);
int MAX (int, int);
int MIN (int, int);

int main()
{
    int n, K, i;
    int l, r, mi, ma, sum;
    int s[102];

    for (i = 0; i <= 101; ++i)
        s[i] = 0;

    scanf ("%d%d", &n, &K);
    for (i = 0; i <= n-1; ++i)
        scanf ("%d", &s[i]);
    for (i = 1; i <= K; ++i){
        scanf ("%d%d", &l, &r);
        ma = MAX (N(l,r,s,n), M(l,r,s,n));
        mi = MIN (N(l,r,s,n), M(l,r,s,n));
        sum = H(mi,ma,s,n);
        printf("%d\n", sum);
    }
    return 0;
}

int N(int l, int r, int s[], int n){
    int sum = 0, i, tem;
    for (i = l; i <= r; ++i){
        tem = s[i] % n;
        sum += tem;
        sum %= n;
    }
    return sum;
}

int M (int l, int r, int s[], int n){
    int sum = 1, i, tem;
    for (i = l; i <= r; ++i){
        tem = s[i] % n;
        sum *= tem;
        sum %= n;
    }
    return sum;
}

int H (int l, int r, int s[], int n){
    int sum = 0, i, tem;
    for (i = l; i <= r; ++i){
        tem = s[i];
        sum ^= tem;
    }
    return sum;
}

int MAX (int a, int b){
    return a >= b ? a : b;
}


int MIN (int a, int b){
    return a <= b ? a : b;
}