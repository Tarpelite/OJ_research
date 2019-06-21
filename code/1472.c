#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(i%2==0)
            continue;
        else
        {
            for(j=2;j<=(int)(sqrt(i));j++)
            {
                if(i%j==0)
                    break;
            }
            if(j>(int)(sqrt(i)))
            {
                printf("%d",i);
                break;
            }
        }
    }
    return 0;
}