#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) 
{
	int n,K,a[100],l[100],r[100],i,j,N,M,t,H;
	scanf("%d%d",&n,&K);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<K;i++)
	scanf("%d%d",&l[i],&r[i]);
	
	for(i=0;i<K;i++)
	{
		N=0;
		M=1;
		for(j=l[i];j<=r[i];j++)
		{
			N=N+a[j];
			N=N%n;
			M=M*a[j];
			M=M%n;
		}

		if(N>M)
		{
			t=M;
			M=N;
			N=t;
		}
		H=0;
		for(j=N;j<=M;j++)
			H=H^a[j];
		printf("%d\n",H);
	}
	return 0;
}