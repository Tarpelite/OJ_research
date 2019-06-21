#include<stdio.h>
#define M 29999
#define X long long
X a[M];
void jiecheng()
{
    a[0]=1;
    for(int i=1;i<M;i++){
        a[i]=a[i-1]*i;
    }
}
int main()
{
    long long m,n;
    scanf("%lld%lld",&m,&n);
    jiecheng();
    printf("%lld",a[m]/a[n]/a[m-n]);
    return 0;
}