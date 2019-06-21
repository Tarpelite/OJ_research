#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,k,j,i,c,d,M,N,H,l,r,t,q;
	scanf("%d%d",&n,&k);
	int a[30000];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=k;i++)
	{
		scanf("%d%d",&l,&r);
		M=1;
		N=0;
		for(j=l;j<=r;j++)
		{			
			N=N+a[j];
			M=M*a[j];
			N=N%n;
			M=M%n;
			}
			c=N;
			d=M;
			if(c>d)
			{
				t=c;
				c=d;
				d=t;
			}
		H=a[c];

		for(j=c+1;j<=d;j++)
		{
			H=H^a[j];
		}
		printf("%d\n",H);
		}
		return 0;
	}