#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 
int n;

int slove(int n)
{
	int k=sqrt(n*1.0),ok=1;
	for(int i=2;i<=k;i++)
		if(n%i==0){
			ok=0;
			break;
		}
	return ok;
}

int main(){
	scanf("%d",&n);
	while(1)
	{
		if(slove(++n))
		{
			printf("%d",n);
			break;
		}
	}
	return 0;}