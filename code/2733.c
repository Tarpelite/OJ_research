#include <stdio.h>
#include <math.h>
int main()
{
  int n, s, i, a;
  scanf("%d", &s);
  n = s + 1;
  a = 1;
  while (a!=0){
  a=0;
  for(i=2;i*i<=n;i++){
    if(n%i==0){
     a++;
    }
  }
  n++;
  }
  printf("%d", n-1);
    return 0;
}