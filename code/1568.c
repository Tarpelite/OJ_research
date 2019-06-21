#include<stdio.h>
int main()
{
    int a,i=2,j=0;
    scanf("%d",&a);
    a++;
    while(a<2000000)
    {
        while((a%i)!=0)
        {
            i++;
            if(a==i)
            {
                j=1;
                break;
            }
        }
        if(j==1)
        {
        break;
        };
        a++;
        i=2;
    }
    printf("%d",a);
    return 0;
}