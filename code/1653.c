#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,num,answer;
    int mod = 0;
    scanf("%d",&num);
    for(i = num + 1; i <= 200000; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                mod++;
            }
        }
        if(mod == 2)
        {
            answer = i;
            break;
        }
        else
        {
            mod = 0;
        }
    }
    printf("%d",answer);
    return 0;
}