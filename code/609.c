#include<stdio.h>
int fuck(int t)
{   
    int a=0;
	for(int i=2;i<t;i++){
		if(t%i==0){
			a++;
		}
	}
	return a==0;
 } 
int main()
{
	int n;
	scanf("%d",&n);
    while(n){
    	if(!fuck(n+1)) n++;
    	else break;
	}
	 printf("%d",n+1);
	 return 0;
 }