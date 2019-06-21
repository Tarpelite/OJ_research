#include<stdio.h>
int main()
{int i,zhong,ge,k,shu[100000]={0};
	scanf("%d",&ge);
	for(i=1;i<=ge;i++){
		scanf("%d",&zhong);
		shu[zhong]++;}
	scanf("%d",&k);
	for(i=99999;;i--){
		if(shu[i]!=0)
		k--;
		if(0==k){
			printf("%d %d",i,shu[i]);
			break;
		}
	}
	return 0;
 }