#include<stdio.h>
#include<math.h>

int y (int);
int main()
{
	int n,i;
	scanf("%d",&n);
	i=n+1;
	while(y(i)==0){
		i=i+1;
	}
	printf("%d",i);
	return 0;
 } 
 int y(int n){
 	int i,j=0;
 	if(n==2)
 	return 1;
 	for(i=2;i<n;i++){
 		if((n%i)==0){
 			j+=1;
		 }
	 }
	 if(j==0)
	 return 1;
	 else
	 return 0;
 	
 }