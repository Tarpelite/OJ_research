#include <stdio.h>

int f(int m)
{ int i;

  int sum = 0;
  
  if (m !=2)
{
  for(i=2;i<m;i++)
  {
  
  if (m%i==0)
  
  {  sum =0;
  	return sum;
     break;
  }
  if (m%i !=0)
  
    sum =1;
  }

}
  
  if(m=2)
  
  sum =1;
  
  return sum; 
  
}
  int main()
 {  int n, m, k;
 
    scanf("%d",&n);
     
    for (m=n+1;m<1000004;m++)
    
    {
	if (f(m)==1)
	
	{
	k=m;
    
    break;
	}
	}
    
    printf("%d",k);
    
    return 0;
  }