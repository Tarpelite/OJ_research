#include<stdio.h>
int main(){
	int n,k,i,j,a[105],b[105],c[105],x[105]={0};
	int y[105],z[105]={0},max,min,p[105],q[105];
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++){
		scanf("%d%d",&b[i],&c[i]);
		y[i]=1;
	}
	for(i=0;i<k;i++){
		for(j=b[i];j<=c[i];j++){
			x[i]+=a[j];
			y[i]=y[i]*a[j]%n;
		}
	}
	for(i=0;i<k;i++){
		p[i]=x[i]%n;
	q[i]=y[i];
	if(p[i]>q[i]){
		max=p[i];
		min=q[i];
	}
	else{
		max=q[i];
		min=p[i];
	}
		for(j=min;j<=max;j++){
			z[i]=z[i]^a[j];
		}
		printf("%d\n",z[i]);
	}
	return 0;
}