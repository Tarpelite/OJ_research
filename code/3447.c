#include <stdio.h>
#include<math.h>

int main() {
	int i,j,b,n,t,k,c;
	int a[100001]={0};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&t);
		a[t]++;
		}
	scanf("%d",&k);
	for(i=100000,j=0;;i--)
	{
		if(a[i]>0)
		{
			j++;
		}
		if(j==k)
		{
			printf("%d %d",i,a[i]);
			break;
		}
	}	
	return 0;
}