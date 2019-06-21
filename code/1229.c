#include<stdio.h>
int zhishu(int a)
{
	int yushu,i;
	if((a+1)<=2){
		printf("%d",a+1);
	}
	else{
	
	i=2;
	do{
		yushu=(a+1)%i;
		i++;
		
	}
	while(yushu!=0&&i<(a+1));
	if(i==(a+1)){
			printf("%d",a+1);
		}
		else{
		return zhishu(a+1);
		}
	}
	
	
}
int main()
{
	int x;
	scanf("%d",&x);
	zhishu(x);
	return 0;
}