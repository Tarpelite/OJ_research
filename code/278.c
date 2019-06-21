#include <stdio.h>
#define max 100000
int main() {
	int i,t,n,k,arr[max]={0},shu=0;
	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%d", &t);
		arr[t]++;
	}//diyibu
	scanf("%d",&k);
	int ans;
	for (i=100000;i>=0;i--) 
	{
		if (shu>=k-1)
		{
			while(arr[i]==0)
			{
				i--;
			}
			ans=i-1;
			break;
		}
		else{
			if(arr[i]!=0) shu++;
		}
	}//dierbu
	printf("%d %d\n", ans,arr[ans]);//jieguo
	return 0;
}