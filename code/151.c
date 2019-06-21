#include <stdio.h>
int main() 
{
	int n,k,i=0,j=0,a;
	scanf("%d",&n);	
	int s[100010]={};
	while(i<n)
	{
		scanf("%d",&a);
		s[a]++;
		i++;
	} 
	scanf("%d",&k);
	i=100001;
	while(j!=k)
	{
		i--;
		if(s[i]!=0)
			j++;
	
	}
	printf("%d %d",i,s[i]);
	return 0;
}