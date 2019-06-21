#include<stdio.h>
int is_prime(int);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",is_prime(n));
	return 0;
}

int is_prime(int n)
{
	int flag,now;
	n=n+1;
	while(1)
	{
		flag=0;
	for(now=2;now<n;now++)
	{
		if(n%now==0) flag=flag+1;
	} 
  	if (flag==0) return n; 
  	else n++;
   }
}