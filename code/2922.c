#include <stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);
    for(num++;;num++)
    {
	for (i = 2; i < num; i++)
    {
        if (num % i==0)
    	break;
    }
    if(i==num)
	break;
	}
	
	printf("%d",num);
	return 0;

}