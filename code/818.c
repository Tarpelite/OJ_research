#include <stdio.h>
int a[100000];
int main()
{
	int n, j, w, num;
	scanf("%d", &n);
	
	for(j = 0; j < n; j++)
	{
		scanf("%d", &w);
		a[w]++;
	}
	scanf("%d", &num);
	
	j = 99999;
	while(num != 0)
	{
		if(a[j] != 0)
		{
			num--;
		}
		j--;		
	}
	
	printf("%d %d", j + 1, a[j + 1]);
	return 0;
}