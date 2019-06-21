#include <stdio.h> 

long long pailie(int a,int b)
{
    int i;
    long long int sum=1;
    
    if(b<a-b)   
        b=a-b;
    for(i=b+1;i<=a;i++)     
       sum*=i;   
 
    for(i=1;i<=a-b;i++)    
        sum/=i;  
  
      return sum;
}
int main(){    
   int x,y;
   scanf("%d%d",&x,&y);
   printf("%d",pailie(x,y)) ;
	return 0; 
}