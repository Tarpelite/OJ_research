#include<stdio.h>
int f(int x){
	int i,flag=0;
	for(i=2;i<x;i++)
		if(x%i==0){
			flag=1;break;
		}
	if(flag==1) return 0;
	else return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	n=n+1;
	while(f(n)!=1)
		n++;
	printf("%d",n);
	return 0;
}