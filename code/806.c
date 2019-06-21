#include<stdio.h>
#include<stdlib.h>
int n[1000005],num[100005]={0};
int compare(const void*a,const void*b)
{
	return *(int*)a-*(int*)b;
}
int main()
{
	int q,k,t,j;
	scanf("%d",&q);
	int i;
	for(i=0,j=0;j<q;i++,j++)
	{
		scanf("%d",&n[i]);
		if(num[n[i]]>0)
		{
			num[n[i]]++;
			i--;
		}
		else
		{
			num[n[i]]++;
		}
	}
	qsort(n,i,sizeof(int),compare);
	scanf("%d",&k);
	printf("%d %d",n[i-k],num[n[i-k]]);
	return 0;
}