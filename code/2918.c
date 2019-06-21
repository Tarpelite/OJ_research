#include<stdio.h>
int main()
{
    int i,n,a,b=0; 
    scanf("%d", &n);
    for(a=n+1;a<100020;a++)
       {
	   for (i=2;i<a-1;i++)
       {
        if (a%i==0)
            {b=1;
			break;}
       }
	   if(b==0)
	   {
	   printf("%d",a);
	   break;}
	   if(b==1)
	   b=0;
      }
	return 0;
 
}