#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int a;
	scanf("%d", &a);
	if(a == 2)
	{
		printf("3");
		return 0;
	}
	int i, j, flag = 1;
	for(i = 2; ; i += 2)
	{
		flag = 1;
		for(j = 2; j * j <= a + i; j++)
		{
			if((a + i) % j == 0)
			{
				flag = 0;
				break;
			}
				
		}
		if(flag) break;
	}
	printf("%d", a + i);
}