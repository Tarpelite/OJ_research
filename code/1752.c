#include<stdio.h>
#include<math.h>
#include<string.h>
int zhishu(int);

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;;i++){
    if(zhishu(i)==1)
	{
		break;
	}
	}
	printf("%d",i);
	return 0;

} 

int zhishu(int x)
{
	int j;
	int t=1;
	if(x>2){
	for(j=2;j<x;j++)
	{
		if(x%j==0)
		{
			t--;
		}
		}	    
	}
	return t;
}