#include<stdio.h>
int main()
{
    int a[100000]={0};
    int n,i,k,c,y=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&c);
		a[c]++;
    }
	scanf("%d",&k);
	for(i=99999;i>0;i--)
	{
		if(a[i]!=0)
		y++;
		if(y==k)
		{
			c=i;
			y=a[i];
			break;
		}
	}
	printf("%d %d",c,y);
	return 0;   
}