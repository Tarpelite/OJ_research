#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,k,s=1;
    scanf("%d%d",&m,&n);
    
    s=1;
    for(k=1;k<=n;k++)
    s=s*(m-n+k)/k;
    
	printf("%d\n",s);
 
    return 0;
}