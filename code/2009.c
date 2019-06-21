#include<stdio.h> 
#include<string.h>
int a[10000002];
int b[100002];
int main()
{
	int n,k;
	scanf("%d",&n);
	memset(b,0,sizeof(b));
	int flag=-1;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]); 
		b[a[i]]++;
		if(a[i]>flag)
			flag=a[i]; 
	}
	scanf("%d",&k);
	int i=flag;
	int p;
	int j=0;
	while(j<k)
	{
		if(b[i])
		{
			j++;
			p=i;
		}
		i--;
	}
	//for(int i=1;i<=flag;i++)
	//	printf("%d %d\n",i,b[i]);
	printf("%d %d",p,b[p]);
}