#include <stdio.h>
long long a[9593]={2};
long long find(long long,long long[],long long);
int main()
{
  long long i=3,n=1,flag,j,m,h,w=0;
  
  for(;i<100004;i=i+2){
  	for(flag=1,j=0;a[j]*a[j]<=i;j++)
  	   if(i%a[j]==0){
  	   	    flag=0;
		 }
  	if(flag!=0){
	  	a[n]=i;
	  	n++;
	  }
	  }
  scanf("%lld",&m);
  
  h=find(m,a,9593);
  printf("%lld\n",a[h+1]);	
   return 0;
  	
  }	
	
long long find(long long key,long long a[],long long size)
{
	long long mid,high,low;
	high=9593-1;
	low=0;
	while(high>=low){	
	    mid=(high+low)/2;
				if(key==a[mid]){
		return mid;	
		}
		
		else if(key>a[mid]){
		low=mid+1;	
		}
			
		else{
		high=mid-1;
		}
		   
	}
	
}