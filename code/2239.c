#include<stdio.h> 
#include<math.h>

int zs(int x)
{
 int sum = 0;
 for(int i = 2; i <= sqrt(x);i++)
 {
  if(x % i == 0)
  sum = sum + 1;
 }
 if (sum == 0)
 {
  return 1;
 }
 else 
 {
  return 0;
 }
}

int main()
{
 int n;
 int num;
 scanf("%d", &n);
 for(int i = n + 1;;i++)
 {
  if (zs(i) == 1)
  {
   num = i;
   break;
  }
 }
 printf("%d", num);
 return 0;
}