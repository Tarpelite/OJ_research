#include<stdio.h>
#include<math.h>
int f(int);
int main(){
	int n,m;
	scanf("%d",&n);
	n=n%2==0? n+1:n+2;
    while(f(n)!=1)
    n=n+2;
		printf("%d",n);
		return 0;
	} 


 
int f(int x)                     
{
	int i;
	if(x==2||x==1) return 1;
	for(i=2;i<=x;i++)
	{
	if(x%i==0)
	break;}
	if(i==x) 
	return 1;
	else return 0;
 }