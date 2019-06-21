#include<stdio.h>
int main()
{
	int n,next,yinshu,flag=1;
	scanf("%d",&n);
	next=n+1;
	while(flag){
		yinshu=n;
		while(next%yinshu!=0)yinshu--;
		if(yinshu==1) flag=0;
		else next++; 
	}
	printf("%d",next);	
	return 0;
}