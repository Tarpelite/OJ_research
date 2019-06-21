#include<stdio.h>
int main(void)
{
	int n,i,k,x;
	scanf("%d",&n);
	if(n==1) printf("2");
	else if(n==2) printf("3");
	else
	{
		while(1)
		{
			x=0;
			n++;
			for(i=2;i<n;i++) 
			{
				if(n%i==0) {x++;break;}
			}
			//printf("%d\n",n);
			if(x==0) {printf("%d",n);break;}
		}
	}
	return 0;
}