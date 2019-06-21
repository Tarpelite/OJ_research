#include<stdio.h>
  long long  a(int x){
	
	if(x==1||x==0)
	return 1;
	
	else return x*a(x-1);
}
int main(){
	int m,n;
	
	scanf("%d%d",&m,&n);
	if(n==0) 
	printf("0");
	else{

long long  b;
	b=a(m)/(a(m-n)*a(n));
	printf("%d",b);}
	return 0;
	
}