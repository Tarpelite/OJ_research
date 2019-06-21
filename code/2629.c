#include <stdio.h>
int prime(int n);
int main()
{ int n,i;
  scanf("%d",&n);
  for(i=n+1;i<1000000;i++)
  {
      if(prime(i)!=0)
        {printf("%d",prime(i));
      break;
        }
  }

    return 0;
}
int prime(int n)
{ int i;
    for (i=2;i*i<=n;i++)
        if(n%i==0) return 0;
    return n;
}