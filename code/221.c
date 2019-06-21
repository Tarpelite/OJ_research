#include <stdio.h>
int z(int b)
{
  int i,n=0;
  for(i=2;i<=b;i++)
    if(b%i==0)
      n++;
  if(n==1)
    return 1;
  else
    return 0;
}
int main()
{
  int n,m,d;
  scanf("%d",&n);
  m=n+1;
  while(1)
  {
  	d=z(m);
  	if(d==1)
  	{
  	  printf("%d",m);
  	  break;
	}
	m++;
  }
  return 0;
}