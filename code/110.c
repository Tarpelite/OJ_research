#include <stdio.h>
int main()
{	int book[100000]={0};
    int i,t,n,m,k,max;
    
	max=0;
	
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&t);
	book[t]++; 
	if(max<t)max=t;
    }
    scanf("%d",&k);
	  
    m=0;		
    i=max;
	 
    while(k>0){if(book[i]>0) k--;i--;}
	i++;				     	    
    printf("%d %d",i,book[i]); 		 
    return 0;
}