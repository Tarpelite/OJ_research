#include<stdio.h>
int main()
{
	int a,i,k,b=0;
	scanf("%d",&a);
	for(k=a;;k++)
	{
	  b=0;
	   for(i=2;i<k;i++)
	   {
	   	 if(k%i==0){b=1;	}
	   }
	   if(b==0&&k>a)
	   break;
      }
    printf("%d",k);
	return 0;
}