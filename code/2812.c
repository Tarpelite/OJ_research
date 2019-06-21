#include<stdio.h>
int f(int);
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=n+1;f(i)!=1;i++);
	
	printf("%d",i);
	return 0;
}

int f(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0){break;}
	}
	if(i==n){return 1;}
	else{return 0;};
}