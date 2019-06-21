#include<stdio.h>
int check(int a){
	int i=2;
	while(i!=a){
		if(a%i==0)
		return 1;
		else i++;
	}
	if(i==a)
	return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	n++;
	while(check(n++));
	printf("%d",n-1);
	return 0;
}