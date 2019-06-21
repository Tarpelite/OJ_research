#include <stdio.h>
#include <math.h>
int zhishu(int n);
int main()
{
	int n,i;
	scanf("%d",&n);
	n++;
	for(;zhishu(n) == 0;n++);
	printf("%d",n);
	return 0;
}
int zhishu(int n)
{
	int i;
	for(i = 2;i <= sqrt(n);i++){
		if((n % i) == 0){
			break;
		}
	}
	if(i == (int)sqrt(n) + 1){
		return 1;
	}
	else{
		return 0;
	}
}