#include <stdio.h>
int iszhi(int a);
int main()
{
	int x;
	scanf("%d",&x);
	for(int i=1;i<=100000;i++){
		if(iszhi(x+i)==1)
			{printf("%d",(x+i));
			break;}
	}
	return 0;
} 

int iszhi(int a){
 	int n=0;
	for(int i=1;i<a;i++){
		if(a%i==0)
			n++;}//除得尽的有几个 
	if(n==1)
	return 1;
	else return 0;
 }