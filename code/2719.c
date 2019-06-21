#include<stdio.h>
int main()
{
	int x,y,i,a;
	scanf("%d",&x);
	for(y=x+1;y;y++){
		for(i=2,a=0;i<y;i++){
			if(y%i==0){
				a+=1;
			}
		}
		if(a==0){
			break;
		}
	}
	printf("%d",y);
	return 0;
}