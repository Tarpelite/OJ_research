#include <stdio.h>

int main()
{
	int m,num[100005] = {0};
	int n,k;
	int i,j;
	
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&m);
		if(m > 0 && m < 100001){
			num[m]++;
		}
	}
	scanf("%d",&k);
	
	for(i = 99999,j = 0;j < k;i--){
		if(num[i] > 0){
			j++;
		}
	}
	
	printf("%d %d",i + 1,num[i + 1]);

    return 0;
}