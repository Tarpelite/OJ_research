#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int j,prime=0,a;
    scanf("%d",&n);

    while(prime==0)
    {
        prime=1;
        n=n+1;

        for(j=2;j<=sqrt(n);j++)
        {
            a=n%j;
            if(a==0)
            {
                prime=0;
                break;
            }
        }


    }
    printf("%d",n);
    return 0;

}