#include<stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int i,j;
	if (n == 1)
		printf("2");
	else {
		for (i = n + 1;; i++)
		{
			for (j = 2; j < i / 2 + 1; j++)
			{
				if (i%j == 0)
					goto a;
			}
			printf("%d", i);
			break;
		a:;
			
		}
	}
	return 0;
}