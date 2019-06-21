#include <stdio.h>
int main()
{   
 int n;  
  int i, j;  
  scanf ("%d", &n);  
  for (i = n+1; ;++i)
{      
  for (j = 2; j*j <= i; ++j)
{ 
           if (i%j==0)break; 
       }       
 if (j*j > i){ 
           printf ("%d\n", i); 
           break;    
    }  
  } 
   return 0;

}