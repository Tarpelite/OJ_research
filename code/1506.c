#include<stdio.h>
int main()
{
	int a[100005],i,n,K,l,r,j,o;
	int N,M,H,MAX,MIN;
	scanf("%d%d",&n,&K);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<K;i++)
	{
		scanf("%d%d",&l,&r);
		N=0;
		M=1;
		for(j=l;j<=r;j++)
		{
			
			N=N+a[j];
			M=(M%n)*a[j];
		}
//		printf("%d %d\n",N,M);
		N=N%n;
		M=M%n;
		if(N<=M)
		{
			MAX=M ;
			MIN=N;
		}
		else if(N>M)
		{
			MAX=N;
			MIN=M;
		}
		if(MAX==MIN) 
		{
			H=a[MIN];
		}
		else
		{
			H=a[MIN];
		 for(o=MIN+1;o<=MAX;o++)
		 {
		 	H=H^a[o];
		 }
		}
		printf("%d\n",H);
	}
return 0;
}