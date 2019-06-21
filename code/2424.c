#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int a[20000000]={0},n,i,k,b[2000000]={0},sum,x,aa;
int cmp(const void*a,const void*b){
	return*(int*)b-*(int*)a;
}
int main()
{
	scanf("%d",&n);
	sum=1;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&x);
		if(b[x]==0) 
		{
			a[sum]=x;
			b[x]=b[x]+1;
			sum+=1;
		}
		if(b[x]!=0)
		{
			b[x]=b[x]+1;
		}
	}
	if(a[sum]==0) sum=sum-1;
	for(i=1;i<=sum;i++)
	b[a[i]]=b[a[i]]-1;
	scanf("%d",&k);
	qsort(a+1,sum,sizeof(a[0]),cmp);
	aa=a[k];
	printf("%d %d",aa,b[aa]);
	return 0;
}