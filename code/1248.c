#include<stdio.h>
int fac(int n);
int main()
{
	int num;
	scanf("%d",&num);
	num++;
	for(num;fac(num)!=1;)num++;
	printf("%d",num);
	return 0;
} 
int fac(int n){
	int i, c=0;
	for(i=n-1;i>1;i--)
		if(n%i==0)
			c++;
	if(c==0)
		return 1;
	else return 0;	
}