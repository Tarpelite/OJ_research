#include<stdio.h>
int main()
{ 
	int n,k,i,j,l,r,H;
	scanf("%d%d",&n,&k);
	int a[n];
	for(i = 0;i<n;i++)
		scanf("%d",&a[i]);
	for(i = 0;i<k;i++)
	{
		int sum = 0,pai = 1;
		scanf("%d%d",&l,&r);
		for(j = l;j<=r;j++)
		{
			sum += a[j];
			if(pai >= n ) pai%=n;
			pai *= a[j];
		}
		sum %= n;
		pai %= n;
		int max,min;
		sum>pai?(max = sum,min =pai):(max = pai,min = sum);
		H = a[min];
		for(j = min;j<=max-1;j++)
		{
			H ^= a[j+1];
		}
		printf("%d\n",H); 
	} 
 }