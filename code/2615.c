#include <stdio.h>
long long f(int);
int main()
{
    int m,n;
long long a;
      scanf("%d%d",&m,&n);
       if(m!=0&&m>n&&n!=0)
      a=f(m)/(f(n)*f(m-n));
     else
     a=1;
       printf("%lld",a);
       return 0;
}
long long f(int b)
{
    long long k=1,i;
     for(i=b;i>0;i--)
     k=k*i;
    return k;
}