#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j=2,k,a[100100]={0};
	scanf("%d",&n);
	i=n+1;
	while(i<100100){
		a[i]=0;
		j=2;
	while(a[i]==0&&j<=sqrt(i)){
		if(i%j==0){
			a[i]=1;
		}
		j++; 
    }
    i++;
	}
	for(k=n+1;k<100100;k++){
		if(a[k]==0){
			printf("%d",k);
			break;
		}
	}
	return 0;
}