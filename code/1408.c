#include<stdio.h>

int main()
{
	int n,a[100003]={1},i,j;
	for(i=2;i<=318;i++)
	{
		for(j=2;i*j<=100003;j++){a[i*j-1]=1;}
	}
	scanf("%d",&n);
	for(i=n+1;i<=100003;i++){if(!(a[i-1])){break;}}
	printf("%d",i);
	return 0;
}