#include <stdio.h>


int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n+1;;i++)
        {for(j=2;j<i;j++)
            {if(i%j==0)
                break;}
        if(j==i)
            {printf("%d",j);
            break;}}

    return 0;
}