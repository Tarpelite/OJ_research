#include<stdio.h>
long long f(int);
int main()
{
  int m,n;
  long long ans;
  scanf("%d%d",&m,&n);
  ans=f(m)/(f(n)*f(m-n));
  if(n==0||m==n)
  {
  printf("1");return 0;}
  
	//printf("%lld %lld %lld ",f(m),f(n),f(m-n));
  printf("%lld",ans);
  return 0;

}
long long f(int x)
{
    int i;
	long long ans=1;
    for (i=1;i<=x;i++)
        ans*=i;
   // if (x==0) return 1;
    return ans;
}