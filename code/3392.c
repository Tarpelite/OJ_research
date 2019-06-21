#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d",&a);
    int prime();
    a+=1;
    while(prime(a))
    {
        a+=1;
    }
    printf("%d",a);
    return 0;
}
 int prime(int a)
 {
     int b=a-1;
     while(a%b!=0)
     {
         b-=1;
     }
     if (b==1)
        return 0;
        return 1;
 }