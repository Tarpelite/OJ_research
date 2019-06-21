#include <stdio.h>
int is_prime(int x)
{
	if(x==1)
	  return 0;
	for(int now=2;now*now<=x;now++){
		if(x%now==0)
		  return 0;
	}
	return 1;
}

int main()
{
	int n,x;
    scanf("%d",&n);
	x=n+1;
	
	while(is_prime(x)==0){
		x++;
	}
	
	printf("%d\n",x);
	
	return 0;
}