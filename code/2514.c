#include<stdio.h>
    int s[10000005];

int main()
{
    int n;
    scanf("%d",&n);
     
    scanf("%d",&s[0]);
    int max=s[0];
    for(int i=1;i<n;i++)
    {
    	scanf("%d",&s[i]);
    	if(s[i]>max)
    	max=s[i];
	}

   int k;
   scanf("%d",&k);
   
	int flag=0;
	int x=max;
	for(int t=1;t<=k-1;t++)
	{
   for(int i=1;;i++)
	  {
	  	  max=x-i;
	  	  for(int k=0;k<n;k++)
	  	  {
	  	  	if(s[k]==max)
	  	  	{
  	        flag=1;
	  	  	break;	  	  		
				}
	  	   }
		 if(flag==1)
		 break;
	   } 
	   flag=0;	
	   x=max;	
	}
    int cnt=0;
    for(int y=0;y<n;y++)
    {
    	if(s[y]==max)
    	cnt++;
	}
    printf("%d %d\n",max,cnt);
	return 0;
}