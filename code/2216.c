#include<stdio.h>
#include<math.h>
int main()
{int x,m,i,k;
scanf("%d",&x);
for(m=x+1;m>x;m++)
{k=sqrt(m);
  for(i=2;i<=k;i++)
  {if(m%i==0){break;}
   }
   if(i>k){printf("%d",m); break;}
 

  
}
return 0;
}