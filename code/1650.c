#include <stdio.h>
int f(int a)
{
	int i, b;
for(i= 2,b = 0; i*i <= a; i++)
{
	if( a%i == 0)
	
	b++;
   	
	}	
	if( b == 0)
	return 1;
	return 0;		
}
int main()
{
	int a, i, b;
	scanf("%d", &a);
for( i = a+1 ; i <= 110000; i++)
{	
	if(f(i) == 1){
	
	b = i;
	break;
}
}
printf("%d", b);
	return 0;	
	}