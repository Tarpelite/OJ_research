#include<stdio.h>
int main()
{
    int n,d,a=1;
    scanf("%d",&n);
    while(a!=0)
    {
        n++;
        a=0;
        for(int m=2; m<n; m++)
        {
            if(n%m==0)
            {
                a++;
            }
        }
        if(a==0)
        {
            printf("%d",n);
        }



    }
    return 0;
}