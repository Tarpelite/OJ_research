#include<stdio.h> 
int main(){
	int n,m,i,j;
	scanf("%d",&n);
	i=n+1;
	while(1){
		for(j=2,m=0;j<i;j++){
			if(i%j==0)
			m=i;
		}
		if(m!=i){
		m=i; 
		break;}
	i++;
	}
	printf("%d",m);
	return 0;
}