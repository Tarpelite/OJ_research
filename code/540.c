#include<stdio.h>
int N(int l, int r);
int M(int l, int r);
int H(int l, int r);
int a[100];
int n;

int main()
{
    int K, i, Ni, Mi, Hi, l, r, max, min;

    scanf("%d%d", &n, &K);

    for(i = 0; i < n ; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < K; i++)
    {
        scanf("%d%d", &l, &r);

        Ni = N(l, r);
        Mi = M(l, r);
        max = (Ni >= Mi? Ni:Mi);
        min = (Ni <= Mi? Ni:Mi);
        Hi = H(min, max);

        printf("%d\n", Hi);

    }

    return 0;
}

int N(int l, int r)
{
    int i, sum = 0, ans;

    for(i = l; i <= r; i++)
    {
        sum = (sum % n) + (a[i] % n);
    }

    ans = sum % n;

    return ans;
}

int M(int l, int r)
{
    int i, ans, pro = 1;

    for( i = l; i <= r; i++)
    {
        pro = (pro % n) * (a[i] % n);

    }

    ans = pro % n;

    return ans;
}

int H(int l, int r)
{
    int i, ans;

    ans = 0;

    for(i = l; i <= r; i++)
    {
        ans = ans ^ a[i];
    }

    return ans;
}