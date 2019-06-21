#include <stdio.h>
int a[10000001]={};
int c[10000001]={};
int main()
{
	int n,m,k,b,i=0,t;
	scanf("%d",&n);
	while(i<n){
		scanf("%d",&b);
		a[b]+=1;
		i++;
	}
	for(i=1,t=1;i<=10000000;i++)
	{
		if(a[i]==0)continue;
		else
		{
		c[t]=i;
		t++;
		 } 
	}
	t=t-1;	
	scanf("%d",&k);
	printf("%d ",c[t-k+1]);
	printf("%d",a[c[t-k+1]]);
	return 0;
 }