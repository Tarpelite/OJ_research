#include<stdio.h> 
int main()
{
	int n,num,i,a=0;
	scanf("%d",&n);
	num=n+2;
	if(n==2){printf("3");}
	else {while(1)
	{for(int i=2;i<num;i++)
	{if(num%i==0){a++;}}
    if(a==0){printf("%d",num); break;}
	else {num=num+2; a=0;}}}
	return 0;
}