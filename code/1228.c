#include<stdio.h>
#include<math.h>
int zhi(int x);
int main()
{
	int n;
	scanf("%d",&n);
	while(1)
		{
			n++;
			if(zhi(n))
				{
					printf("%d",n);
					break;
				} 
		}
	return 0;
 } 
 int zhi(int x)
 {
 	if(x==2)
 		return 1;
 	else
 		{
 			for(int i=2;i<=sqrt(x);i++)
 				{
 					if(x%i==0)
 						return 0;
				}
			return 1;
		 }
 }