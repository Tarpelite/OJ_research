#include<math.h>
#include<stdio.h>

int main()
{
    int prime(int);

    int n;
    scanf("%d",&n);
   n+=1;
while(prime(n))
{
n+=1;
}
    printf("%d",n);
return 0;
}
int prime(int a)
{
    int b=a-1;
  while(a%b!=0)
  {
      b-=1;

  }
  if(b==1)
        return 0;
    return 1;
}