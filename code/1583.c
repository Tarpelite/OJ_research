#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	a=a+1;
	int i;
	int c=1;
	while(c==1){
		i=2;
		while(i<a){
			if(a%i==0){
				break;
			}
			i=i+1;
		}
		if(i==a){
			c=0;
		}
		else{
			a=a+1;
		}
	}
	printf("%d",a);
	return 0;
}