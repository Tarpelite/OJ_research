#include <stdio.h>

#include <math.h>

int prime(int x)

{

	int i,k,a=0;

	k=(int)sqrt((double)x);

	for(i=2;i<=k;i++)

	{

		if(x%i==0)

		break;

	}

	if(i>k)

	return x;

	else

	return 1;

 } 

 int main(void)

 {

 	int n,j,r;

 	scanf("%d",&n);

 	for(j=n+1;j<=199999;j++)

 	{

 		r=prime(j);

 		if(r==1)

 		continue;

 		else

 		break;

	}

	printf("%d",r);

	return 0;

 }