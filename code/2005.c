#include<stdio.h>
int judge(int n)
{
    int i;
    if(n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
    for(i=3;i*i<=n;i+=2) {
        if(n%i==0) return 0;
    }
    return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int j;
	
	for(j=n+1;j<=1000000;j++)
	{
	   if(judge(j))
	    {
			printf("%d",j);
	   	    break;
        }
		else 
		    continue;
	 } 
	return 0;
 }