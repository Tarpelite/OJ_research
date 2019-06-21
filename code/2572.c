#include<stdio.h>
#include<math.h>
int f(int n);
int main()
{
	int n,p;
	int i=1;
	scanf("%d",&n);
	while(1){
		n++;
		p=f(n);
		
		if(p==1){
			printf("%d",n);
			break;
		}
	}
	return 0;
}
int f(int n){
	int i,k;
    int flag=1;
    k=(int)sqrt(n);
    for(i=2;i<=k;i++){
    	if(n%i==0){
    		flag=0;
			break;
    	}
       
	}
    
    return flag; 
}