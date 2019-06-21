#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,d;
	scanf("%d",&a);

	if(a>2)
	{
c=a;
while(a!=0)
	{		
		c++;
	for(b=2;b<c;b++) 
		{d=c%b;
		if(d==0)
		break;}	
		
		if(b==c)
	a=0;
	


	}
		}
		else
		c=a+1;
		printf("%d",c);
	return 0;
}