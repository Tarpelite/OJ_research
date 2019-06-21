#include<stdio.h>
int a[105];
int n; //定义全局变量!!!尤其是main函数中也用到的却不包含在自定义函数变量中的！！
int max(int x, int y)
{
    return x>y?x:y;
}
//求较大值

int min(int x, int y)
{
    return x<y?x:y;
}
//求较小值

int N(int l, int r)
{
    int i, yu_n;
    yu_n=0;
    for(i=l; i<=r; i++)
    {
        yu_n+=(a[i]%n);
        yu_n=yu_n%n;
    }
    return yu_n;
}
//N(l,r),(a+b)%n=((a%n)+(b%n))%n

int M(int l, int r)
{
    int i, yu_m;
    yu_m=1;
    for(i=l; i<=r; i++)
    {
        yu_m*=(a[i]%n);
        yu_m=yu_m%n;
    }
    return yu_m;
}
//M(l,r),(a*b)%n=((a%n)*(b%n))%n

int H(int l, int r)
{
    int i, yihuo;
    yihuo=0;
    for(i=l; i<=r; i++)
    {
        yihuo=yihuo^a[i];
    }
    return yihuo;
}

int main()
{
    int k, i;
    int zuo, you;
    int l, r;
    int jieguo;

    scanf("%d%d",&n, &k);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    for(j=0; j<k; j++)
    //不能再用i作为循环变量，下面的函数会受到i的影响
    {
        scanf("%d%d",&l, &r);
        zuo=min(N(l,r),M(l,r));
        you=max(N(l,r),M(l,r));

        jieguo=H(zuo,you);
        printf("%d\n",jieguo);
    }

    return 0;
}