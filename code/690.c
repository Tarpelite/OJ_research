#include <stdio.h>
#include <math.h>
int zhishu (int a)
{
    int i, j, b, c;
    for(i = 2, c = 0; i <= sqrt(a); i++)
    {
        b = a % i;
        if(b == 0)
           c++;
    }
    if(c == 0)
        return 1;
    else
        return 0;
}
int main()
{
    int a, i, b;
    scanf("%d", &a);
    for(i = a + 1;; i++)
    {
        if(zhishu(i) == 1)
        {
          printf("%d", i);
          break;
        }
    }
}