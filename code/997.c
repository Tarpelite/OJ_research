#include <stdio.h>
#include <stdlib.h>
int N(int,int);
int M(int,int);
int H(int,int);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int A[10000];
int n,k;
int main() {
    scanf("%d %d\n",&n,&k);
	int i=0,j=0;
	int min,max;
	int res[k];
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	int l,r;
	for(j=0;j<k;j++)
	{
		scanf("%d %d",&l,&r);
		if(N(l,r)==M(l,r))
		{
			res[j]=A[N(l,r)];
			
		}
		if(N(l,r)!=M(l,r))
		{
		min=N(l,r)<M(l,r)?N(l,r):M(l,r);
		max=N(l,r)>M(l,r)?N(l,r):M(l,r);
		res[j]=H(min,max);
	    }
	}
	for(j=0;j<k;j++)
	{
		printf("%d\n",res[j]);
	}
	return 0;
}

int N(int x,int y)
{
	int sum=0,s;
	for(s=x;s<=y;s++)
	{
		sum=sum+A[s];
	}
	sum=sum%n;
	return sum;
}

int M(int x,int y)
{
	int cj=1,s;
	for(s=x;s<=y;s++)
	{
		cj=cj*A[s];
		cj=cj%n;
	}
	
	return cj;
}

int H(int x,int y)
{
	int h,s;
	h=A[x]^A[x+1];
	for(s=x+2;s<=y;s++)
	{
		h=h^A[s];
	}
	return h;
}