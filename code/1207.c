#include<stdio.h>
int zhishu(int);
int main()
{
	int a,i;
	scanf("%d",&a);
	for(i=a+1;i<=1000000;i++){
		if(zhishu(i)==1){
			printf("%d",i);
		break;
		}
	}	
}

int zhishu(int b)
{
	int s,d,v=0;
	for(s=2;s<=b-1;s++){
		d=b%s;
		if(d==0){
			v=1;
		}	
	}
	if(v==0)
	return 1;
	else
	return 0; 
}