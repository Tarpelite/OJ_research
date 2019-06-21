#include<stdio.h>
 #include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a,k=n+1,t=1;
    while(k<=1000000)
    {
        a=2;
        while(a<k)
        {
            if(k%a==0)
            {
                break;
            }
            else
                a++;
        }
        if(a==k)
        {
            printf("%d",k);
            break;
        }
        else
        k++;
    }
}