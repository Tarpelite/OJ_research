#include <stdio.h>

int main()
{int x,i,c=1;
 scanf("%d",&x);
 x++;
 if(x==3)
  {printf("3");
   goto y;
  }
  else
   {t:while(c)
    {for(i=2;i<=x-1;i++)
     {if(x%i==0)
	   {x++;
	    goto t;
	   }
	 } 
     goto z;
	}
   }
z:printf("%d",x);
y:return 0;
}