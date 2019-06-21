#include <stdio.h>

int main()
{
	int m,num[100005] = {0};
	int n,k;
	int i,j;
	int max = 1; 
	
	scanf("%d",&n);
	for(i = 0;i < n;i++){
		scanf("%d",&m);
		if(m > max){
			max = m;
		}
		if(m > 0 && m < 100001){
			num[m]++;
		}
	}
	scanf("%d",&k);
	
	for(i = max,j = 0;j < k;i--){
		if(num[i] > 0){
			j++;
		}
	}
	
	printf("%d %d",i + 1,num[i + 1]);

    return 0;
}