#include <stdio.h>
#include <stdlib.h>

 int is_prime(int x)
 {    if (x == 1)
      return 0;
      int now;
        for (now = 2 ; now * now <= x; now ++)
        if (x%now == 0)
           return 0;
    return 1;
    }

int main()
{
    int a,i;
    scanf("%d",&a);
   if(a==1)
        {printf("2");}
   else
      {
          if(a==2)
             printf("3");
          else{
                  i=a+1;
                  while (i<1000000)
                     {
                        i++;
                         if(is_prime(i))
                              break;}
                   printf("%d",i);
               }

       }
         return 0;
}