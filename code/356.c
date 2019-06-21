#include <stdio.h>
#include <stdlib.h>
int a[100000];
int main()
{
    int i;
    int n,k;
    int counter = 1;
    scanf("%d",&n);
    while (counter <= n)
    {
        scanf("%d",&i);
        a[i]++;
        counter++;
    }
    scanf("%d",&k);
    for (i = 99999,counter = 0; counter < k; i--)
    {
        if (a[i] != 0)
        {
            counter++;
        }
    }
    printf("%d %d",i+1,a[i+1]);
    return 0;
}