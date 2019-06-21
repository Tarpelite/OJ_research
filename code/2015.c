#include<stdio.h>
int main()
{
	long long  n,next,yinshu,flag=1;
	scanf("%lld",&n);
	next=n+1;;
	while(flag){
		yinshu=n;
		while(next%yinshu!=0)
		yinshu--;
		if(yinshu==1) flag=0;
		else next++; 
	}
	printf("%lld",next);	
	return 0;
}