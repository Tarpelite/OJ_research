#include <stdio.h>
int a[1000]={0};
int n; 

int N(int l,int r)
{
  int result= 0;
  for(;l<=r;l++)
  {
	result += (a[l]);
	result %= n;
  }
  return result;
}
  
int M(int l,int r) 
{
  int result = 1;
  for(;l<=r;l++)
  {
	result *= a[l];
	result %= n;
  }
  return result;
}

int H(int l,int r) 
{
  int result = 0;
  for(;l<=r;l++)
  {
	result = result ^ a[l];
  }
  return result;
}

int main() 
{
	int k;
	scanf("%d%d",&n,&k);
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	 } 
	 
	int l[1000]={0},r[1000]={0};
	for(i=0;i<k;i++)
	{
	 scanf("%d%d",&l[i],&r[i]);	
	}
	
	int p,q;
	for(i=0;i<k;i++)
	{
	   	if(N(l[i],r[i])<=M(l[i],r[i]))
	   	{
	   		p = N(l[i],r[i]);
	   		q = M(l[i],r[i]);
		}
		else
		{
			q = N(l[i],r[i]);
	   		p = M(l[i],r[i]);
		}
		printf("%d\n",H(p,q));
	}
	 
	return 0;
}