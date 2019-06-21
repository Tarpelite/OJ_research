#include<stdio.h>

int isplus(int n, int l,int r, int a[], int len)
{
    int i, N=0;
    for(i=l;i<r+1;i++)
    {
        N=N+a[i];
    }
    N=N%n;
    return N;
}
int ismultip(int n,int l, int r, int a[], int len)
{
    int M=1, i;
    for(i=l; i<r+1; i++)
    {
        M=(M*a[i])%n;
    }
    return M;

}
int isdif(int MAX, int MIN, int a[], int len)
{
    int H=a[MIN], i;
    for(i=MIN+1; i<MAX+1; i++)
    {
        H=H^a[i];
    }
    return H;

}

int main()
{
    int n, K, i, j, MAX, MIN;
    int bump1[200], bump2[200], result[200], len[200];
    int a[200]={0}, l[200]={0}, r[200]={0};
    scanf("%d %d", &n, &K);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=0;j<K;j++)
    {
        scanf("%d %d", &l[j], &r[j]);
    }
    for(j=0;j<K;j++)
    {
        len[j]=l[j]-r[j]+1;
       bump1[j]=isplus(n, l[j], r[j], a, len[j]);
       bump2[j]=ismultip(n, l[j], r[j], a, len[j]);
       if(bump1[j]>=bump2[j])
       {
           MAX=bump1[j];
           MIN=bump2[j];
       }
       else
       {
           MAX=bump2[j];
           MIN=bump1[j];
       }
       len[j]=MAX-MIN+1;
       result[j]=isdif(MAX, MIN, a, len[j]);
       printf("%d\n", result[j]);
    }


    return 0;
}