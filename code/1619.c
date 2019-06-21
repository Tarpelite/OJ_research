#include<stdio.h>
#include<math.h>
#include<stdlib.h>


 int a[1000001];
 
 void sort(int l,int r)
{
	int key = a[l];
	int i = l,j = r;
	while(i < j)
	{
		while(i < j && key <= a[j])
		{
			j--;
		}
		a[i] = a[j];
		while(i < j && key >= a[i])
		{
			i++;	
		}
		a[j] = a[i];
	}
	a[i] = key;
	if(l < r)
	{
		sort(l,i - 1);
		sort(i + 1,r);
	}
		
}
int main()
{
	int b,c,d,i,h=0,s,m=0;
	while(~scanf("%d",&b))
	{
		for(i = 0;i < b;i++)
		{
			scanf("%d",&a[i]);
		}
		scanf("%d",&c);
		sort(0,b-1);
		for(i=b-1;i>=0;i--)
	{
		if(a[i-1]<a[i]&&h<c)
		{
			h++;
		}
		if(h==c)
		{
			s=a[i];
			break;
		}
	}
		for(i=0;i<b;i++)
	{
		if(a[i]==s)
		m++;
	}
		
	printf("%d %d",s,m);
	return 0;
	}
	return 0;
}