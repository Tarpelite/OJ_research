#include <stdio.h>
#include <math.h>
int zhishu(int n)
{int i,p=0;
 for(i=2;i<=sqrt(n);i++)
 { if(n%i==0) p++;
 }
 if(p==0) return 1;
 else return 0;
}
int main()
{int n,i;
scanf("%d",&n);
 for(i=n+1;;i++)
 {if(zhishu(i)==1) break;
 }
 printf("%d",i);
}