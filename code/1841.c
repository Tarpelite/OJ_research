#include<stdio.h>
int main()
{
	int n,i=2,p,j=2;
	scanf("%d",&n);
	for(;n>0;n--)
	{
		for(i=2;i<n;i++)
			if(n%i==0)
			break;
		if(i>=n){
				p=n+1;
				break;
			}	
	}
	for(p;;p++)
	{
		for(j=2;j<p;j++)
		    if(p%j==0)
		    break;
		if(j>=p){
			    printf("%d",p);
			    break;
		}
	}
	return 0;
}