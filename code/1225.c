#include<stdio.h>
long long matter(int n);
int main(){
int m,n;

scanf("%d %d",&m,&n);
if(m==0||n==0){
	printf("1");
	return 0;
}
if(m<n){
	printf("1");
	return 0;
}
printf("%lld",matter(m)/(matter(n)*matter(m-n)));	

return 0;
}
long long matter(int n){
	int i;
	long long j=1;
	for(i=1;i<=n;i++){
		j*=i;
	} 
	return j;
}