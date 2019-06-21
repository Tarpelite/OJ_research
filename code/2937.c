#include<stdio.h>
int crazy(int x)
{
 if(x==1)
 return 0;

    for(int i=2;i<x;i++)
    if(x%i==0)
    return 0;
    return 1;
 
}
int main()
{
 	int a,b;
 	scanf("%d",&a);
   for(int i=a+1;i<100100;i++)
 	
 	{
     b=crazy(i);
     if(b==0)
     continue;
     else if(b==1)
     {
	  printf("%d",i);
	  break;
	 }
	 		}
return 0;}