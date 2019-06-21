#include<stdio.h>
int f(int);
int main()
{
	int n,i,d;
	scanf("%d",&n);
	n++;
	while(f(n)==0){
		n++;
	}
	printf("%d",n);
}
int f(int n){
	int d,e;
	d=n-1;
	e=1;
	while(e!=0){
		e=n%d;
		d--;
	}
	if(d==0)
	return 1;
	else
	return 0;
	
}