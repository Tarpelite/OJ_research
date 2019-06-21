#include<stdio.h>
int is_zhishu(int n)
 {  int mark=0;
 	if(n==2) mark=1;
 	else 
	 {
	 int i=2;
	 for(; i<n; i++)
		 { 
		 if(n%i==0)
			 {	mark=1;
			 break;
			 } 	
		 }	
	 }
 return mark;
 }
 int main()
 {
 	int n;
 	scanf("%d",&n);
 	int k=n+1;
 	while(is_zhishu(k)==1) k++;
 	printf("%d",k);
 	return 0;
 }