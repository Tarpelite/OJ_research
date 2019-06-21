#include<stdio.h>
int main()
{
	int n,i,num[100000]={0},max=0,x;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
        scanf("%d",&x);
        num[x]++;
        max=max>x?max:x;
	}
	int k;
	scanf("%d",&k); 
	while(max--)
	{
		if(num[max])
		{
		    k--; 
		    if(k==1)
		    {
		        printf("%d %d",max,num[max]);
		        break;
		    }
		    
		
		}
	}
	
	return 0;
}