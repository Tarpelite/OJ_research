# include <stdio.h>
int main()
{
long long n,i;
long long m;
long long a,c;
scanf("%lld %lld",&m,&n);
a=1,c=1;
for(i=n+1;i<=m;i++)
{
a=a*i;
}

for(i=1;i<=m-n;i++)
{
c=c*i;
}
int d=a/c; 
printf("%lld\n",d);

return 0;
}