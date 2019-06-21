#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int search(int a)
{

  int b,i;
  b=a+1;
  SE:i=2;
   while(b%i!=0)
    i++;
   if(i==b)
    return b;
   else
    {
        b=b+1;
        goto SE;
    }


}
int main()
{
    int n,s;
    scanf("%d",&n);
    s=search(n);
    printf("%d",s);
    return 0;
}