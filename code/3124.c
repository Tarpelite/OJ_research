#include<stdio.h>
#include<stdlib.h>
int zhishu(int n);
int main(void)
{
	int n, index;
	scanf("%d", &n);
	for (index = n+1; index < 100005; index++)
	{
		if (zhishu(index))
		{
			printf("%d", index);
			break;
		}
	}
	return 0;
}
int zhishu(int n)
{
	int index;
	for (index = 2; index < n; index++)
		if (n%index == 0)
			return 0;
	return 1;
		
 }