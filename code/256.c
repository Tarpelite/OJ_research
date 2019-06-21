#include <stdio.h>
int main()
{
 int n,i,k=0;
 scanf("%d",&n);
 if(n==1){printf("2");
 }
 if(n==2){
 printf("3");}
 if(n>2){
 while(1){
 	n++;
 	for(i=2;i<n-1;i++){
 		if(n%i==0){
		 k=0;break;}
 		else k=1;
	 }
	 if(k==1) break;
	 } 	
 	printf("%d",n);

}
 	return 0;
}