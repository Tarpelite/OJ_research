#include<stdio.h>
int n,a[110]={0};
int N(int l,int r)
{
    int sum=0,i;
    for(i=l;i<=r;i++)
        sum+=a[i];
    return sum%n;
}
int M(int l,int r)
{
    double res=1;
    int i;
    for(i=l;i<=r;i++)
        res=(((int)res%n)*(a[i]%n))%n;
    return (int)res%n;
}
int H(int l,int r)
{
    int m=0,i;
    for(i=l;i<=r;i++)
    {
        m^=a[i];
    }
    return m;
}
void main()
{
    int K,i,l,r,A,B,C,D;
    scanf("%d%d",&n,&K);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(K--)
    {
        scanf("%d%d",&l,&r);
        A=N(l,r);
        B=M(l,r);
        C=(A<B?A:B);
        D=(A>B?A:B);
        printf("%d\n",H(C,D));
    }
}