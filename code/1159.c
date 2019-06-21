#include <stdio.h>
#include <math.h>
int is_zhishu(int x);
int main ()
{
	int n;
	scanf("%d",&n);
	int i=n+1;

	while(i)
	{
		if(is_zhishu(i)==1){
			printf("%d",i);
			break;
			}
    	i++;
	}
	return 0;
 } 
 int is_zhishu(int x)
 {
 	int i;
 	int a=1; 
 	for(i=2;i<=sqrt(x);i++){
 		if(x%i==0){
 			a=0;
 			break;
		 }
	 }
	return a;
 }