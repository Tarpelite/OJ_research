#include<stdio.h>
#include<math.h>
int is_z(int a)
{
	int i,mod,m;
	if(a==1||a==2||a==3)
	{m=1;}
	else 
	{mod=sqrt(a);
	 m=1;
	for(i=2;i<=mod;i++)
	{if(a%i==0)
	{m=0;
	break;
	}
	}
	}
	return m;
	
	
}
int main()
{int x ,i;
scanf("%d",&x);
for(i=x+1;;i++)
{if(is_z(i))
 {printf("%d",i);
 break;
 }
 
}

}