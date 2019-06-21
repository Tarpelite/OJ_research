#include<stdio.h>
int p(int x){
	if(x==1)
	return 0;
	for(int i=2;i*i<=x;i++)
	if(x%i==0)
	return 0;
	return 1;
}

int main(){
	long long n;
	scanf("%d",&n);
	for(int i=n+1;i<10000000;i++){
		if(p(i)==1){
			printf("%d",i);
			break;
		}
	}
return 0;	
}