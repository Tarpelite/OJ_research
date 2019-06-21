#include <stdio.h>
int a[10000001]={0};
int main()
{int n,k,i,t,b=1,x=0;
 scanf("%d",&n);
  for(i=0;i<=n-1;i++)
   {scanf("%d",&t);
    a[t]=a[t]+1;
   }

  scanf("%d",&k);
   for(i=1;i<=n;i++)
   {if(a[i]!=0)
     x++;
   }
   for(i=1;i<=n;i++)
    {if(a[i]!=0)
     {if(b==x-k+1)
      {printf("%d %d",i,a[i]);
       goto z;
	  }
	  else
	   {b++;
	   }
	 }
   }
z:return 0;
}