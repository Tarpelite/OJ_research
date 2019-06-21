#include<stdio.h>
#include<math.h>
int main()
{
	

int a,o;
int i,j=0,l=0;
scanf("%d",&a);
if(a==2)
{printf("3");
return 0;
}
o=a;


do 
{ l+=2;a+=2;
for(j=0,i=2;i<a;i++)
	{
		if(a%i==0)
		j++;
	}
	
	
		
} 
while(j!=0);
o+=l;

printf("%d",o);
return 0;
}