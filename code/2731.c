#include <stdio.h>
#include <math.h>
int main()
{
  int n, s, i, a;
  scanf("%d", &s);
  n = s;
  a = 1;
  while (a!=0){
  n++;
  a=0;
  for(i=2;i*i<=n;i++){
    if(n%i==0){
     a++;
    }
  }

  }
  printf("%d", n);
    return 0;
}