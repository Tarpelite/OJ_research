# include <stdio.h>

int f(int n)  

{

    int i;
    int sum=0;
    if(n!=2)    
    {
        for(i=2;i<n;i++)
     {
        if(n%i==0)
           {
               sum=0;
               break;
           }
        if(n%i!=0)
            sum=1;
     }
    }
    if(n==2)     
        sum=1;
    return sum;
}

int main ()
{

    int n;
    scanf("%d",&n);
    while(f(n+1)!=1){
         n++;
         f(n+1);
        
              
    } 
    printf("%d",n+1);
    return 0;
}