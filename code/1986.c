#include<stdio.h>
int iszhishu(int a)
{
	int i;
	if(a==2)
		return 1;
	for(i=2;i<a;i++){
		if(a%i==0)
			return 0;
	}
	return 1;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	i=n+1;
	while(1){
		if(iszhishu(i)){
			printf("%d",i);
			break;
		}
		i++;
	}
	return 0;
}