#include<stdio.h>
#include<math.h>
int  prime(int a,int b)
{
    int i=2,j,n;
    for(j=a+1;j<=b;j++)    
    {
        n=sqrt(j)+1; 
        i=2;
        while(i<n)  
          {   
              if(j%i==0)
                break;
            i++;
        }       
       if(i==n){
	    printf("%d ",j);
	    break;
	   }
      
    }
}
int main() 
{ 
int a,b=100099; 
scanf("%d",&a); 
prime(a,100099);
return 0;
}