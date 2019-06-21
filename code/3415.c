#include <stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int zhishu();
	int n;
	scanf("%d", &n);
	while(1)
	{
		n = n + 1;
		if (zhishu(n)) {
			printf("%d", n); break;
		}
		
	}
}




	int zhishu(int x)
	{

		int s = 1;

		for (int i = x - 1; i >= 2; i--)
		{
			if (x%i == 0)
			{
				s = 0; break;
			}
		}
		return s;
	}