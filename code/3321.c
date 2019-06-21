#include<stdio.h>
int main(){
	int n,m,i,j;
	scanf("%d",&n);
	for(m=n+1;;m++){
		for(i=2;i<m;i++){
			j=m%i;
			if(j==0)	break;
		}
		if(i==m){
			
			break;}
	}
	printf("%d",m);
	return 0;
}