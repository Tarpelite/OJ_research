#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int zhishu(int);

int main(int argc, char *argv[]) 
{ 
	int n,i;
	scanf("%d",&n);
	for(i=n+1;i<1000000;i++)
	    if(zhishu(i))
	        break;
	printf("%d",i);
	return 0;
}

int zhishu(int x)
{
    int i;
    for(i=x-1;i>0;i--)
        if(x%i==0)
            break;
    if(i==1)
        return 1;
    else
        return 0;
}