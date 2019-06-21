#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	
	int i, j, judge = 1;
	for(i = x + 1; i <= 110000; i ++){
		judge = 1;
		for(j = 2; j < i; j ++){
			if(i % j == 0){
				judge = 0;
				break;
			}
		}
		if(judge == 1){
			printf("%d\n", i);
			break;
		}
	}
	
	return 0;
}