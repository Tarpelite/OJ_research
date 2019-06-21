#include <stdio.h>
int a[100005];
int main()
{
    int n,k,t,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&t);
		a[t]++;
	}
	scanf("%d",&k);
	for(i=100000;i>=1;i--){
		if(a[i])k--;
		if(k==0)
		{
			printf("%d %d\n",i,a[i]);
			break;
		}
	}
	return 0;
}