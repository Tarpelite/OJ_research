#include<stdio.h>
int main()
{
	int a,b,i,s,d,v=0;
	scanf("%d",&a);
	for(i=a+1;i<=10000000;i++)
	{
		v=0;
	for(s=2;s<=i-1;s++)
	{
	d=i%s;
	if(d==0){
		v=1;
		break;
	}
	
	}
	if(v==0)
	{
	printf("%d",i);
	break;
		}
	
}
return 0;	
}