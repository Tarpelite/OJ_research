#include<stdio.h>

int main()
{
	int a,b,t;
	scanf("%d",&a);
	for(b=a+1;;b++){
		for(t=2;;t++){
			if(b%t==0){
				break;
			}
		}
		if(t==b){
			printf("%d",b);
			break;
		}
	}
	
	return 0;
}