#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    for(b=a+1;;b++)
    {
        int n=0;
        for(c=2;c<b;c++)
        {
            if(b%c==0){n++;}
        }
        if(n==0){break;}
    }

    printf("%d",b);
    return 0;
}