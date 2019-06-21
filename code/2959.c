#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
double ans=1.0, n,m;
int i,k;
scanf("%lf %lf",&m,&n);
for(i=1;i<=n;i++)
{
ans=ans*(m-n+i)/(n-i+1);
}
k=ans+1e-7;
printf("%d",k);



	return 0;
}