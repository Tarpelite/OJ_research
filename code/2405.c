#include<stdio.h>
long long Comb(int);
long long constr(int,int);
int main()
{
	long long m,n,res,k;    scanf("%d %d",&m,&n);
	k=m-n;
	if(n==0)
	printf("1");
	else
   {   res=constr(m,n)/Comb(n);
	   printf("%lld",res); 
	   
	}return 0;	
 } 
long long Comb(int x)
   {   long long sum=1,i=1;
       for(i=1;i<x+1;i++)
       sum*=i;
       return sum;
	}   
long long constr(int x,int y)
{  
     long long i=x-y+1,sum=1;
     for(i=x-y+1;i<x+1;i++)
       sum*=i;
       return sum;
}