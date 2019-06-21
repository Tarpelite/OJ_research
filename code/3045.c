#include<stdio.h>
int is_prime(int n){

    int i;
    for(i = 2; i *i<=n; i ++)
        if(n%i==0)return 0;
         
    return 1;
}
 int main (){
 	int i;
 	int n;
 	int m;
 	scanf("%d",&n);
    for(m=n+1;;m++){
    	if(is_prime(m))
    	break;
	}
		 printf("%d",m);
		 return 0;
	 
 }