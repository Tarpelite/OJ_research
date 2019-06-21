#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>

int s[233333];
int main()
{
	int n,m,N,k,a;
	scanf("%d\n",&n);
	
	for(int i=0; i<n; i++)
	{
		scanf("%d",&m);
		s[m]++;
	}
	scanf("%d",&k);
	for (int i=100000;k>0;i--){
		if (s[i]!=0) 
			k--;
		if (k==0)
		{
			N=s[i];
			a=i;
		}
	}

	printf("%d %d",a,N);
	return 0;
}