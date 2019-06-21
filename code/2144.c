#include<stdio.h>

int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	if(n==2)
	{
		printf("3");
		return 0;
	}
	else{
	for(i=n+2;;i+=2)
    {
		k=1;
		for(j=3;j*j<=i;j+=2)
		{
		if(i%j==0)
		{k--;break;}
		}
		if(k) {
			printf("%d",i);
			break;
		}
	}}
	return 0;
}