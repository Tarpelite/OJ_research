#include <stdio.h>
#include <math.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a==2) printf("3");
	else{
		a=a+1;
	while(zhishu(a)==1){
		a++;
	}
	printf("%d",a);
	}
	return 0;
}
int zhishu(int a){
	int b;
	b=sqrt(a);
	while(a%b!=0){
		b--;
		if(b==1){
			return 0;
			break;
		}
	}
	return 1;
}