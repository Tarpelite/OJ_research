#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int n;
    int i;
    scanf("%d",&a);
    if(a==1){
    printf("2");
    return 0;}
    else if(a==2){
    printf("3");
    return 0;}

    else if(a>2);
    {

       for(a=a+1;1;a++)
       {
           n=sqrt(a);
           for(i=2;i<=n;i++)
           {
               if(a%i==0)
                  break;
           }
           if(i<=n)
            continue;
           else
          {
            printf("%d",a);
            return 0;
          }

        }
    }
return 0;
    }