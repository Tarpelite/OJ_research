#include<stdio.h>
int zhi(int x)
{
	int i;
	for(i=2;i<(x/2)+1;i++)
	{
		if((x%i)==0) break;
	 }
	if(i==(x/2)+1) return 1;
	else return 0; 
}
int main()
{
	int x;
	scanf("%d",&x);
	x++;
	while(zhi(x)==0)
	{
		x++;
	}
	printf("%d",x);
	return 0;
 }