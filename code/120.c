#include<stdio.h>
#define MAX_N 100000
int mp[MAX_N+5];
int main()
{
	int n,k,i,km = MAX_N,KM = 0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&k);
		mp[k]++;
		if(k<km)km = k;
		if(k>KM)KM = k; 
	}
	scanf("%d",&k);
	for(i = KM;i>=km;i--)
	{
		if(mp[i]>0)k--;
		if(!k) break;
		
	}
	printf("%d %d\n",i,mp[i]);
	return 0;
}