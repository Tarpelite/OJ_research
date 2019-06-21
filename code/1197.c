#include <stdio.h>
#include <math.h>
int N(int x);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
 	int n;
	 scanf("%d",&n);
	 while(1)
	 {
	 	n++;
	 	if(N(n))
	 	{
	 		printf("%d",n);
	 		break;
		 }
	 }
	  
	return 0;
}
	int N(int x)
	{
		if(x==2)
		return 1;
		else
		{
			int i;
			for(i=2;i<=sqrt(x);i++)
			{
				if(x%i==0)
				return 0;
			}
			return 1;
		}
	}