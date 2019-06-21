#include <stdio.h>

int sum(int l, int r, int n);
int ad(int l, int r, int n);
int yr(int min, int max);

int a[100];

int main()
{
    int h[100],
        l,r,n,m,
        i,j,max,min,
        num,qes;

    scanf("%d%d",&num,&qes);

    for(i = 0;i < num;i++)
        scanf("%d",&a[i]);

    for(i = 0;i < qes;i++)
    {
        scanf("%d%d",&l,&r);

        n=sum(l,r,num);
        m=ad(l,r,num);
        max=(n > m)? n : m;
        min=(n < m)? n : m;
        h[i]=yr(min,max);
    }

    for(i = 0;i < qes;i++)
        printf("%d\n",h[i]);

    return 0;

}

int sum(int l, int r, int n)
{
    int i,sum=0;

    for(i = l;i <= r ;i++)
    {
        sum=(sum+a[i])%n;
    }
    sum=sum % n;

    return sum;
}


int ad(int l, int r, int n)
{
    int i,ad=a[l]%n;

    for(i = l+1;i <= r;i++)
    {
        ad=((ad%n)*a[i]%n)%n;
    }
    ad=ad % n;
    return ad;
}

int yr(int min, int max)
{
    int i,yr=a[min];

    for(i = min+1;i <= max;i++)
    {
        yr=yr ^ a[i];
    }

    return yr;
}