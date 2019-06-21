#include <stdio.h> 

int main()
{
 int n, K;
 scanf("%d %d", &n, &K);
 int A[n];
 int l, r;
 int  out[K];

 for (int s = 0; s <n; s++)
 {
  scanf("%d", &A[s]);
 }
 for(int L = 0; L < K; L++)
 {
  scanf("%d %d", &l, &r);
  int N = 0;
  for(int i = l; i <= r; i++)
  {
   N = N+A[i]%n;
  }
  int Nlast = N % n;
  int M = 1;
  for(int j = l; j <= r; j++)
  {
   M = (M%n) * (A[j] % n);
  }
  int Mlast = M % n;
  if (Mlast >= Nlast)
  {
   int H =A[Nlast];
   for(int k = Nlast + 1; k <= Mlast; k++)
   {
    H = H ^ A[k];
   }
   //printf("%d\n", H);
	out[L]=H;
  }
  else if (Mlast < Nlast)
  {
   int H =A[Mlast];
   for(int lw = Mlast + 1; lw <= Nlast; lw++)
   {
    H = H ^ A[lw];
   }
   //printf("%d\n", H);
	out[L]=H;
  }
  }

 for(int L = 0; L < K; L++)
{	
   printf("%d\n", out[L]);
}

 
 return 0;
}