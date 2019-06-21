#include <stdio.h>

int main()
{
    int n,p;
    scanf("%d",&n);
    int i=2;
    n++;
    if(n==1)
    printf("2");
    if(n!=1)
    {
        while(i<n)
        {
            p=n%i;
            if(p==0)
                {
                    n++;
                    i=2;
                }
            else i++;
        }
    printf("%d",n);
    }
    return 0;
}