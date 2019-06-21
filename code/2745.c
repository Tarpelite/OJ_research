#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    for(a=a+1;;a++)
    {
        for(b=2;;b++)
        {

            if(b>=a)
               {
               c=1;
               break;}
               if(a%b==0)
            break;
        }
        if(c==1)
            break;
    }
    printf("%d",a);
    return 0;
}