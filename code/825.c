#include <stdio.h>
#include <math.h>

int ifp(int x);
int main()
{
  int x,i;
  scanf("%d", &x);
  for(i = x+1;;i++){
    if (ifp(i))
      break;
  }

  printf("%d", i);

  return 0;
}

int ifp(int x)
{
  int l;
  if (x < 4)
    return 1;
  else
  {
    for (l = 2; l <= sqrt(x); l++)
    {
      if (x % l == 0)
      {
	return 0;
      }
    }
    return 1;
  }
}