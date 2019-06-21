#include <stdio.h>
int main()
{
	int a[100010]={},n,k,b;
	int s=0,i=100000;
	scanf("%d",&n);
	while (n--){
		scanf("%d",&b);
		a[b]++;
	}
	scanf("%d",&k);
	while (s<k){
		if (a[i]!=0){
			s++;
		}
		i--;
	}
	printf("%d %d",i+1,a[i+1]);
	return 0;
}