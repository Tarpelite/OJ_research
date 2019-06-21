#include<stdio.h>
int zs(int);
int main()
{   int n;
    scanf("%d",&n);
    n=n+1;
    while(zs(n)!=1)
      n++;
    printf("%d",n);
    return 0;
}
 int zs(int x)
  {  int i=2;
     while(x%i!=0&&i<x)
     { i++;
	 }
	 if (i==x&&x!=2) return 1;
	 else if (x==2) return 1;
	       else return 0;
  }