#include<stdio.h>
int main(){
	int N(int a[],int mod,int l,int r);
    int M(int b[],int mod,int l,int r);
    int H(int c[],int l,int r);
	int n,k;
	scanf("%d%d",&n,&k);
	int A[n],p;
	int max,min,h1,h2,h3;
	int x,y;
	for(p=0;p<n;p++){
		scanf("%d",&A[p]);
	}
	int count=k;
	int result[count],q=0;
	while(k>=1){
		scanf("%d%d",&x,&y);
	h1=N(A,n,x,y);
	h2=M(A,n,x,y);
	if(h1>=h2) {
		max=h1;min=h2;
	}
	if(h2>h1){
		max=h2;min=h1;
	}
	h3=H(A,min,max);
	result[q]=h3;q++;
	k--;	
	}
	for(q=0;q<count;q++){
		printf("%d\n",result[q]);
	}
	return 0;
}


int N(int a[],int mod,int l,int r){
	int i,sum1=0;
	for(i=l;i<=r;i++){
		sum1=sum1+a[i];
	}
	sum1=sum1%mod;
	return (sum1);
}


int M(int b[],int mod,int l,int r){
	int j,sum2=1;
	for(j=l;j<=r;j++){
		sum2=sum2*(b[j]%mod);
		sum2=sum2%mod;
	}
	sum2=sum2%mod;
	return (sum2);
}

int H(int c[],int l,int r){
	int k;
	int sum3=c[l];
	for(k=l+1;k<=r;k++){
		sum3=sum3^c[k];
	} 
	return (sum3);
}