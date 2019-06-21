#include<stdio.h> 
#include<stdio.h>
#include<math.h>
#include<string.h>
void ini();
int isprime[200004];
int n;
int main()
{
	scanf("%d",&n);
	ini();
	for(int i=n+1;i<=2*n,i<=200004;i++)
		{
			if(isprime[i])
			{
				printf("%d",i);
				break;
			}
		}
}
void ini()
{
	int j=0;
	for(int i=1;i<=2*n && i<=200004;i++)
		isprime[i]=1;
	isprime[1]=0;
	//printf("%d",n);
	for(int i=2;i<=2*n && i<=200004;i++)
		if(isprime[i]==1)
		{
			j=2;
			while(i*j<=2*n && i*j<=200004)
		{	
			isprime[i*j]=0;
			j++;
		}	
		}
}