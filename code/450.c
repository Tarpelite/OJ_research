#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int a,b,i;
	scanf("%d",&a);
	
	b=a+1;
	
	for(i=2;i<b;i++){
		if(b%i==0){
			b++;
			i=1;}
	}
	printf("%d",b);
	
	return 0;
}