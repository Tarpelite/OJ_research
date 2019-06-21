#include<stdio.h>
 int a[100000]={0}; 
int main() 
{ 	
int n,i,m,k,j; 	
scanf("%d",&n); 	
for(i=0;i<n;i++) 	
{ 		scanf("%d",&m); 		a[m]++; 	} 	
scanf("%d",&k); 	
for(i=99999;i>=0;i--) 	
{ 		if(a[i]!=0) 		
                { 	k--; 	
                        j=i; 		
                            } 		
               if(k==0) 		
             { 			
               break; 
                      } 	
            } 	
printf("%d %d",i,a[i]); 	
return 0; }