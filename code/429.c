#include <stdio.h>
#define MAX(x,y) x>y?x:y
#define MIN(x,y) x<y?x:y
int A[10000]; 
int N(int n, int l, int r)
{
	int i, sum, k=0;
	for(i=l; i<=r; ++i)
    {
		k+=A[i];	
	}
	sum=k%n;
	return sum;
}
int M(int n, int l, int r)
{
	int i, sum, k=1;
	for(i=l; i<=r; ++i)
    {
	k=((k%n)*(A[i]%n))%n;
	}
 	return k;
}
int H(int a, int b) 
{
	int i, k;
	int sum=A[a];
	for(i=a+1; i<=b; ++i)
    {
		k=A[i];
    
		sum^=k;
	}
	return sum;
}
int main ()
{
	int n, k, i, l, r, a, b, c, d, K[100];
	scanf("%d%d", &n, &k);
	for(i=0; i<n; ++i)
    {
		scanf("%d", &A[i]);	
	}
	for(i=0; i<k; ++i)
	{
		scanf("%d%d", &l, &r);
		c=N(n, l, r);
		d=M(n, l, r);
		a=MIN(c, d);
		b=MAX(c, d);
		K[i]=H(a, b);	
	}
	for(i=0; i<k; ++i)
	{
	printf("%d\n", K[i]);
   }
	return 0;
}