#include<stdio.h>
int N(int l, int r);
int M(int l, int r);
int H(int l, int r);
int min(int a, int b);
int max(int a, int b);
int a[101];
int n;

int main()
{
    int k, l, r, i;
    scanf("%d%d", &n, &k);
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    while(k--){
        scanf("%d%d", &l, &r);
        printf("%d\n", H(min(N(l, r), M(l, r)), max(N(l, r), M(l, r))));
    }
    return 0;
}

int N(int l, int r)
{
    int i;
    int x=0;
    for(i=l;i<=r;i++){
        x=x%n+a[i]%n;
    }
    return x%n;
}

int M(int l, int r)
{
    int i;
    int x=1;
    for(i=l;i<=r;i++){
        x=(x%n)*(a[i]%n);
    }
    return x%n;
}

int H(int l, int r)
{
    int i, x=a[l];
    for(i=l+1;i<=r;i++){
            x^=a[i];
    }
    return x;
}

int min(int a, int b)
{
    int x;
    x=a<b?a:b;
    return x;
}

int max(int a, int b)
{
    int x;
    x=a>b?a:b;
    return x;
}