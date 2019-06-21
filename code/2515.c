#include<stdio.h>
int a[100005];
int main(){
	int n,k,i,km=100000,kn=0;
	scanf("%d",&n);
	while(n--){
	scanf("%d",&k);
	a[k]++;
	if(k<km)
	km=k;
	if(k>kn)
	kn=k; 
} 
scanf("%d",&k);
for(i=kn;i>=km;i--){
	if(a[i]>0)
	k--;
	if(!k)break;

}
printf("%d %d\n",i,a[i]);
return 0;}