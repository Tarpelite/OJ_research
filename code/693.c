#include<stdio.h>
	int a[100001]={0};
int main()
{
	int i=1,j1,j2,n,k,s,sum,nut=0;
     scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&s);
		a[s]+=1;
			}
	scanf("%d",&k);
	for(j2=100001;j2>=1;j2--){
		if(a[j2]!=0){
			nut+=1;
		}
		if(nut==k){
			sum=j2;break;
		}
	}
	printf("%d %d",sum,a[sum]);
	return 0;
 }