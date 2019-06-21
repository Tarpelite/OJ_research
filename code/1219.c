#include <stdio.h>
int main()
{ long long i,j,n,m,a=1,b=1,c=1,k;
scanf("%lld%lld",&m,&n);
if(m==0)
{
    printf("%lld",0);

}
if((m!=0))
{for(i=1;i<=n;i++)
 a=a*i;
 for(j=1;j<=m;j++)
  b=b*j;
 for(k=1;k<=(m-n);k++)
    c=c*k;
 printf("%lld",b/(a*c));





}


}