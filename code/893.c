#include <stdio.h>
#include <math.h>
int iszs(int n)
{
    int i,np = (int)(sqrt(n) + 1);
    for (i = 2;i<np;i++)
    { if (n % i == 0)return 0;  }
    return 1;
}
int main()
{
    int n;
    scanf("%d",&n);
    while (!iszs(++n));
    printf("%d",n);
	return 0;
}