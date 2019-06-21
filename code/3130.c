#include<stdio.h>
int x[100000];
int main()
{
	int i,j=100000,g,k,n,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&g);
		x[g]++;
	}
	scanf("%d",&k);
    while(j>=0)
    {
    	if(x[j]>0) t++;
    	if (t==k) 
		{
		printf("%d %d",j,x[j]);
		break;
	    }
	    j--;
	}
	return 0;
}