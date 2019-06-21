#include<stdio.h> 
int main()
{int n,i;
scanf("%d",&n);

for( i=n+1;1;i=i+1)
 {int m=2;
 while(i%m!=0)
 m=m+1;
 if(m==i)
  printf("%d",m);
  if(m==i)
  break;
 }
 return 0;
}