#include<stdio.h>
#include<math.h>

int zs(int n)
{
	int i;
	for(i=2;i<=(int)(sqrt(n));i++){
		if(0==n%i){
			return 0;
		}
	}
	return 1;
}

int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n+1;i<1000000;i++)
	{
		if(zs(i))
		{
			printf("%d",i);
			break;
		}
	}
}