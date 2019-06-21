#include <stdio.h>

int main ()
{ long long n, m;
  
  scanf("%ld %ld", &m, &n );
  
  long long a, b;
  
  a=m-n;
  
  b=1;
  
  while (a>=1)
  { b = b*a ;
  
    a--;
  } 
  
  long long c, d;
  
  c= m;
  
  d=1;
  
  while (c>=1)
  { d = d*c;
  
    c--;
  }
  
  long long e, f;
  
  e = n ;
  
  f = 1 ;
  
  while (e>=1)
  { f = f * e;
  
    e--;
   } 
   
   int q;
   
   q=d/(f*b);
   
   printf("%d",q);
}