#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 
 int main (){
 	int n;
 	int a[100001]={0};
 	int k;
 	int i ,j;
 	scanf("%d",&n);
 	while(n--){
 		scanf("%d",&i);
 		a[i]++;
	 }
	 scanf("%d",&k);
	 for(i=99999;i>0;i--){
	 	if(a[i]!=0){
	 		k--;
	 		if(k==0){
	 			printf("%d %d",i,a[i]);
	 			return 0;
			 }
		 }
	 }
	 return 0;
	 
 }