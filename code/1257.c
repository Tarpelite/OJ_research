#include <stdio.h>
int f(int);
int main(){
	int n,x1,x;
	scanf("%d",&n);
	for(x1=n+1,x=x1;f(x1)!=1;x1++);{}
	printf("%d",x1);
	return 0;
} 
int f(int m){
	int i,y;
	for(i=2;m%i!=0;i++)
{
}
	if(i==m)
	return 1;
	else 
	return 0;
}