#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    if(n==1)
        printf("2");
    else
    {
        while(n<=100003)
        {
            k=2;
            n++;
            while(n%k!=0)
                k++;
            if(k==n)
            {
                printf("%d",n);
                break;
            }
        }
    }
    return 0;
}