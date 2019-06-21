#include<stdio.h>
int zhishupanduan(int a); 
int main()
{
	int a,i;
	scanf("%d",&a);
	i=a+1;
	while(zhishupanduan(i)==1)
	{
		i++;
	}
	printf("%d",i);
 } 
 
int zhishupanduan(int a)
 {
 	int i=2;
 	while(a%i!=0)
 	{
 		i++;
	 }
 	if(i==a)
 	{
 		return 2;
	 }
	else
	{
		return 1;
	}
 }