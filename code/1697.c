#include<stdio.h>
int main(){
	int m,n,a[100],b[100];
	scanf("%d %d",&m,&n);
	if(m==0||n==0){
		printf("0");
		return 0;
	}
    for(int i=1;i<=n;i++){
    	a[i]=m;
    	b[i]=i;
    	m--;
	}
	for(int i=1;i<=n;i++){
		for(int j=n;j>=1;j--){
			if(a[i]%b[j]==0){
				a[i]=a[i]/b[j];
				b[j]=1;
			}
		}
	}
	int l=1,r=1;
	for(int i=1;i<=n;i++) l=l*a[i];
	for(int i=1;i<=n;i++) r=r*b[i];
	printf("%d",l/r);
	return 0;
}