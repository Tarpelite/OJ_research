#include <stdio.h> 
#include<stdlib.h>
int main()
{ 
	int m,n,s=1,t; 
	scanf("%d%d",&m,&n);
	t=n; 
	while (n>0)
	{ 
		s*=m;
		n--;
		m--; 
	} 
	for(;t>0;t--)
	{ 
		s/=t;
	} 
	printf("%d",s);

	return 0;
}