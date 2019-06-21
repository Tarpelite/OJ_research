#include <stdio.h>
#include <math.h>
int isP(int);
int main()
{
    int n;
    scanf("%d", &n);
    if(n == 1)
    {
        printf("%d", 2);
        return 0;
    }
    int i = n + 1;
    for(;;i++)
    {
        if(isP(i))
            {printf("%d", i);return 0;}
    }
}
int isP(int n)
{
    if(n == 2 || n == 3)
        return 1;
    int i, tmp = sqrt(n);
    if(n % 6 != 1 && n % 6 != 5)
        return 0;
    for(i = 5; i <= tmp; i = i + 6)
    {
        if((n % i == 0) || (n % (i+2) == 0))
            return 0;
    }
    return 1;
}