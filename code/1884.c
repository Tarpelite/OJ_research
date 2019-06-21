#include <stdio.h>
#include<math.h>

int main() {
	int i,j,n,num,k;
	int sum[100001]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&num);
		sum[num]++;
		}
	scanf("%d",&k);
	for(i=100000,j=0;;i--)
	{
		if(sum[i]>0)
		{
			j++;
		}
		if(j==k)
		{
			printf("%d %d",i,sum[i]);
			break;
		}
	}	
	return 0;
}