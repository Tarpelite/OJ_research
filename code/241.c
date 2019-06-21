#include <stdio.h>
#include <stdlib.h>
int N(int l,int r);
int M(int l,int r);
int H(int l,int r);
int max(int a,int b);
int min(int a,int b);
int n,k,a[101],l[101],r[101];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,x;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<k;i++)
		scanf("%d%d",&l[i],&r[i]);
	for(i=0;i<k;i++)
	printf("%d\n",H(min(N(l[i],r[i]),M(l[i],r[i])),max(N(l[i],r[i]),M(l[i],r[i]))));
	return 0;
}
int N(int l,int r)
{ 	int j,m=0;
	for(j=l;j<=r;j++)
	   m+=a[j];
	return m%n; 
}
int M(int l,int r)
{	int j,m=1;
	for(j=l;j<=r;j++)
	   {
	   	m*=a[j];
	   	m=m%n;
	   }
	return m;
}
int H(int l,int r)
{	int j,m=a[l];
	for(j=l+1;j<=r;j++)
	    m^=a[j];
	return m;
}
int max(int a,int b)
{	int m;
	if(a>b)
		m=a;
	else m=b;
	return m;	
}
int min(int a,int b)
{	int m;
	if(a<b)
		m=a;
	else m=b;
	return m;
}