#include<stdio.h>
#include<stdbool.h>
#include<time.h>
int main(){
	
	int r,a[100000]={2},b[9592];		//i=0,j,k=0;
	/*
	for(i=1;i<100000;i++){
		r=i+2;
		j=2;
		while(r%j!=0){
			j++;
		}
		if(j==r)a[i]=r;
	}
	
		
	
	for(i=0;i<9592;i++){
		for(j=k;j<100000;j++){
			if(a[j]!=0){
				b[i]=a[j];
				j++;
				k=j;
				break;
				}
		}
	}
	*/
	

	int cnt=0;
	for(int i=2;i<100000+5;i++){
		bool f=0;
		for(int j=2;j*j<=i;j++)
			if(i%j==0){
				f=1;
				break;
			}
		if(f==0)b[cnt++]=i;
	}
	
	/*
	for(int i=0;i<cnt;i++){
		printf("%d ",b[i]);
	}
	*/
	
	//printf("\n%d",clock());
	
	int n;
	scanf("%d",&n);
	for(int i=0;i<9592;i++){
		if(n==b[i]){
			printf("%d",b[i+1]);
			break;
		}
	}
	return 0;
}