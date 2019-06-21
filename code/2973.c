#include <stdio.h>
int A[100];
int Niu(int, int, int);
int Mou(int, int, int);
int Hug(int, int, int);
int main()
{
    int n, K, l, r, i, res, r_niu, r_mou;
    scanf("%d%d", &n, &K);
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);
        int min, max;
    for(i = 0; i < K; i++)
    {
        scanf("%d%d", &l, &r);
        r_niu = Niu(l, r, n);
        r_mou = Mou(l, r, n);
        min = (r_niu < r_mou) ? r_niu : r_mou;
        max = (r_niu > r_mou) ? r_niu : r_mou;
        res = Hug(min, max, n);
        printf("%d\n", res);
    }
    return 0;
}
int Niu(int l, int r, int n)
{
    int i, sum = 0;
    for(i = l; i <= r; i++)
        sum = sum + A[i];
    return sum % n;
}
int Mou(int l, int r, int n)
{
    int i;
    int tema, temb = A[l] % n;
    for(i = l+1; i <= r; i++)
        {
            tema = A[i] % n;
            temb = (tema * temb) % n;
        }
    return temb;
}
int Hug(int l, int r, int n)
{
    int i, sum = A[l];
    for(i = l+1; i <= r; i++)
        sum = (sum ^ A[i]);
    return sum;
}