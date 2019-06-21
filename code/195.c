#include <stdio.h>
#include <math.h>
int prime_num(int x);
int main(void)
    {
 	int n,i,result;
 	scanf("%d",&n);
 	for(i=n+1;i<=1000002;i++){
		result=prime_num(i);
 		if(result==1)
 		    continue;
		else
		    break;
	}
	printf("%d",result);
	
	return 0;
}
int prime_num(int x){
	int i,j,a=0;
	j=(int)sqrt((double)x);
	for(i=2;i<=j;i++){
		if(x%i==0)
		break;
	}
	if(i>j)
	    return x;
	else
	    return 1;
}