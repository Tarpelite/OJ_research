#include<stdio.h>
int  model(int); 
int main()
{
	int n,m,k;   scanf("%d",&n);  m=n+1 ;
    while(m>0)
    {  if  (model(m)==0)
        m+=1;
        else if(model(m)==1)
        {  printf("%d",m);
           break;
		}
    }
    return 0;
}
int model(int x)
 {   int flag=1,i=2;  
     for(i=2;i<x;i++)
     {  if(x%i==0)
      {
     	flag=0;
        break;
	  }
     }
    return flag; 
 }