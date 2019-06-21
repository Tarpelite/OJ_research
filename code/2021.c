#include <stdio.h>
char gcd(int a){
	if(a<2)return 0;
	if(a==2||a==3)return 1;
	else{
		if(a&1){//奇数 
			int i=1;
			do{
				i+=2;
			}while(a%i);
			if(a==i)return 1;
			else return 0;
		}
		else return 0;//偶数不是 
	}
}
int main(){
	int a;
	scanf("%d",&a);
	do{
		a++;
	}while(!gcd(a));
	printf("%d",a);
	return 0;
}