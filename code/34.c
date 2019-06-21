#include<stdio.h>
int main()
{
	int c;
	int i;
	int PrimeNumber;

	int count = 0;
	scanf("%d", &c);
	for ( i = c + 1; i <= 200000; i++)
	 {
		
		for (int j = 2; j <= i / 2; j++)
		 {
			if (i%j == 0)
			 {
				count++;
			}
		}
		if (count == 0)
		 {
			PrimeNumber = i;
			break;
		}
		count=0;

	}
	printf("%d", PrimeNumber);

	return PrimeNumber;
}