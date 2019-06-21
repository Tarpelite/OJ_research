#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,i,n;
    scanf("%d",&a);
    if(a==2)
        printf("3");
    else
        {a=a+2;
        while(i>0)
        {
            i=a-1;
            while(a%i!=0&&i>1)
            {
                i--;
            }
            if(i>2)
                a=a+2;
            else
                {
                printf("%d",a);
                return 0;
                }

        }
        }
}