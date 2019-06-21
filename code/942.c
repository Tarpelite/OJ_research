#include<stdio.h>
int main(){
	
	int a,b,t=0,c;
	int sum=1;
	scanf("%d %d",&a,&b);
	c=a;
	for(t=1;t<=b;t++) {sum=sum*c;c--;}
	for(t=1;t<=b;t++) sum=sum/t;
	printf("%d",sum);
	return 0;
	
}