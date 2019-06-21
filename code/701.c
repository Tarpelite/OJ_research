#include <stdio.h>
int check(int a);
int main() 
{
	int a;
	scanf("%d",&a);
	a++;
	while(check(a)==0)
		a++; 
	printf("%d",a);
	return 0;
}
int check(int a)
{	int judge=1,i;
	if(a==2)return 1;
	else if(a==1)return 0;
	else{for (i=2;i<a;i++)
	{if(a%i==0)judge=0;	}
	return judge;
	}
	
}