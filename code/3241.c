#include <stdio.h>
int main(){
	
int i,n,k=0,j;
scanf("%d",&n);
for(j=n+1;;j++){
	for(i=2;i<j;i++)
	if(j%i==0) break;
	if(i>=j){
	
	printf("%d",j);
	break;}
}
return 0;
}