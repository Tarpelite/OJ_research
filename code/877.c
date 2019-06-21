#include <stdio.h>
 #include <stdlib.h>

 int a[10000],sum,mul,A,n; 
int N(int l1,int r1)
{
 sum=0; 
for(int i=l1;i<=r1;i++)
{
 sum=sum+a[i]; 
} 
return sum%n; 
}
 int M(int l2,int r2)
{
 mul=1;
 for(int j=l2;j<=r2;j++)
{ 
mul=(mul*a[j])%n;
 }
 return mul; 
} 
int H(int l3,int r3)
{
 A=a[l3]; 
for(int k=l3+1;k<=r3;k++)
{ A=A^a[k]; }
 return A; } 
int min(int a,int b)
{ return a>=b?b:a; } 
int max(int g,int h)
{ return g>=h?g:h; }
 int main() 
{ 
int m,d,c,e,p,q,o[10000],l,r,s;
 scanf("%d %d",&n,&m); 
for(d=0;d<n;d++)
  { 
scanf("%d",&a[d]);
   } 
for(c=1;c<=m;c++)
{ 
scanf("%d %d",&l,&r); 
d=N(l,r); 
e=M(l,r); 
p=min(d,e); 
q=max(d,e); 
o[c-1]=H(p,q); 
} 
for(s=0;s<m;s++)
{
 printf("%d\n",o[s]);
 } 
return 0; 
}