#include <stdio.h>
int haha[11000000];
int ha[11000000];
int main()
{
	int n,a,t,k,i,j;
	scanf("%d",&n);
	t=n;
	while(n--)
	{
		scanf("%d",&a);
		if(haha[a]!=0)
		j++,ha[a]++;
		haha[a]=a;
	 } 
	scanf("%d",&k);
	i=1;
	while(i<=t-k-j+1)
	{
		if(haha[i]!=0)
		i++;
		else
		i++,t++;
	}
	
	printf("%d %d",haha[i-1],ha[i-1]+1);
	return 0;
}