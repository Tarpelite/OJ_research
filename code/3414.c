#include<stdio.h>
#include<math.h>
int prove(int ex)//证明素数 
{
    int i;

    if(0 == ex || 1 == ex)
    {
        return 0;
    }
    for (i = 2; i <= (int)(sqrt(ex)); i++)
    {
        if(0 == ex % i)
        {
            return 0;
        }
    }
    return 1;
    
}
int main()
{
	int n,i=0;
	scanf("%d",&n);
	for(i=n+1;i<1000000;i++)
	{
		if(prove(i)==1)
		{
		printf("%d",i);
		break;
		}
	}
 }