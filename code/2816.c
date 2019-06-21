#include <stdio.h>
int main(){
	int num[100050]={0},n,x,a,p,i,j=100000;
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		scanf("%d",&a);
		num[a]++;
	} 
	scanf("%d",&x);
	i=1;
	while (i<=x){
		if (num[j]!=0){
			p=j;
			i++;
		}
		j--;
	}
	printf("%d %d",p,num[p]);
	return 0;
}