#include<stdio.h>
#include<math.h>
int main(){
int n,k,a[100000]={0},i=0,j,x;
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&x);
	a[x]++;
}
scanf("%d",&k);
for(i=0,j=99999;i<k;j--){
	if(a[j]!=0)
	    i++;
}
j++; 
printf("%d %d",j,a[j]);
	return 0;
}