#include<stdio.h>
int a[10000000]={0},b[10000000]={0},c[10000000]={0};
int main() {
    int n;
    scanf("%d",&n);
    int s,i,j,k=1,p;
    
    for(j=1;j<=n;j++)
    {
    	scanf("%d",&s);
    	if(a[s]==s)
    	{
    	   b[s]++;	
		}
    	a[s]=s;
	}
	for(s=1;s<=n;s++)
	{
	    if(a[s]!=0)
		{
		   c[k]=a[s];
		   b[k]=b[s];
		   k++;	
		}
	}
	scanf("%d",&p);
	printf("%d %d",c[k-p],b[k-p]+1);
	return 0;
}