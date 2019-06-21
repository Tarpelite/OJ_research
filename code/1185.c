# include <stdio.h>

int zhishu(int n)
{
int i,sum,m;
int a=0;
if(n==1)
{
return 2;
}
for(m=n+1;m<=100100;m++)
{
for(i=1;i<=m;i++)
{
sum=m%i;
if(sum!=0)
{
a++;
}
if(a==m-2)
{
return m;
}
}
a=0;
}
}

int main()
{
int n;
int i=0;

scanf("%d",&n);
i=zhishu(n);

printf("%d",i);

return 0;
}