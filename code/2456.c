#include<stdio.h>
int main()
{
int i = 0;
int j = 0;
int t = 1;
int a;
scanf("%d",&a);
for(i = a+1;i <= 1000000;i++)
{
	for(j = 2;j < i;j++)
 	{
	if(i%j == 0)
		{
		t= 0;
 		break;
		}
 	}
	if(t == 1)
	{
	printf("%d",i);
	break;
	}
	t = 1;
}
return 0;
}