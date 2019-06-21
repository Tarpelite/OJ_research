#include <stdio.h>
#include<math.h>
int pd(int m)
{ 
    int i; 
    int k;  
    k=(int)sqrt( (double)m );
    for(i=2;i<=k;i++)
        if(m%i==0)
            break;
	if(i>k)
        return 1;
    else
	return 0;
}
int main()
{
	int x;
	scanf("%d",&x);
	x++;
	while(pd(x)!=1)
	{
		x++;
	}
	printf("%d",x);
	return 0;
}