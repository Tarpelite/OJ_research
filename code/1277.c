# include <stdio.h>

int N(int l,int r,int n,int a[])
{
int i;
int sum=0;
for(i=l;i<=r;i++)
{
sum=(sum+a[i])%n;
}
return sum;
}
int M(int l,int r,int n,int a[])
{
int i;
int sum=1;
for(i=l;i<=r;i++)
{
sum=(sum*a[i])%n;
}
return sum;
}
int H(int l,int r,int a[])
{
int i;
int sum=a[l];
for(i=l+1;i<=r;i++)
{
sum=sum^(a[i]);
}
return sum;
}	
int min(int x,int y)
{
int min;
min=x;
if(y<x)
{
min=y;
}
return min;
}
int max(int x,int y)
{
int max;
max=x;
if(y>x)
{
max=y;
}
return max;
}
int main()
{
int n,k;
int i=0;
scanf("%d %d",&n,&k);
int a[n-1];
int l[k-1],r[k-1];
int b[k-1],c[k-1],d[k-1],e[k-1];
int sum[k-1];
for(i=0;i<=n-1;i++)
{  
scanf("%d",&a[i]);
}
for(i=0;i<=k-1;i++)
{  
scanf("%d %d",&l[i],&r[i]);
}
for(i=0;i<=k-1;i++)
{  
b[i]=N(l[i],r[i],n,a);
c[i]=M(l[i],r[i],n,a);
}
for(i=0;i<=k-1;i++)
{  
d[i]=min(b[i],c[i]);
e[i]=max(b[i],c[i]);
sum[i]=H(d[i],e[i],a);
}
for(i=0;i<=k-1;i++)
{  
printf("%d\n",sum[i]);
}
return 0;
}