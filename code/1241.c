#include<stdio.h> 
#include<stdlib.h>

int comp(const void*a,const void*b)
   { return *(int*)b-*(int*)a; } 

int main()
{
 int n;
 int k;
 scanf("%d", &n);
 int a[n + 1];
 int in;
 int b[100000 + 1];
int j;

 for (int w = 0;w <= 100000;w++)
 {
  b[w] = 0;
 }
 int tmp = 0;
 j=0;
 for(int i = 1; i <= n;i++)
 {
  	scanf("%d", &in);
	b[in]++;
	if (b[in]==1) 
	{
		a[j]=in;
		j++;
	}
 }


	 qsort(a, j, sizeof(int), comp);
	

 scanf("%d", &k);
 printf("%d %d\n", a[k-1], b[a[k-1]]);
return 0;
}