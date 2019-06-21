#include <stdio.h>
int a[100000]={0};
int main(){
	int n,k;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int j;
		scanf("%d",&j);
		a[j]++;
	}
	scanf("%d",&k);
	int h=0;
	for(int i=100000;i>=0;i--){
		if(a[i]!=0)
		h++;
		if(h==k)
		{
			printf("%d %d",i,a[i]);
			break;
		}
	}
	return 0;
}