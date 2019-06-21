#include <stdio.h> 
int is_prime(int x)
 {    if (x == 1) return 0;  
   for (int now = 2 ; now * now <= x; now ++)        
   if (x%now == 0)            
   return 0;    
   return 1; }
   
    int main(){    
	int  x;       
	scanf("%d",&x) ;
	
	for(x=x+1;x<100000+5;x++)     
	  if (is_prime(x)) {                
	  printf("%d ",x);                
	    break;       }       
	  
	   
	  return 0; }