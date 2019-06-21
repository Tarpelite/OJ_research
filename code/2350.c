#include <stdio.h>
 int n,k;
	 int a[10000];
	
int N(int l,int r){
	int k=0,i;
	for(i=l;i<=r;i++){
		k=k+a[i];
	}
	return k%n;
}
int M(int l,int r){
	int k=1,i;
	for(i=l;i<=r;i++){
		k=k*a[i]%n;
	}
	return k%n;
}
int H(int l,int r){
	int k=a[l],i;
	for(i=l+1;i<=r;i++){
		k=k^a[i];
		
	}
	return k;
}
int main()
{
	
	scanf("%d%d",&n,&k);
	int m;
	for(m=0;m<n;m++){
		scanf("%d",&a[m]);
	} 
	int b[100000],c[100000];
	for(m=1;m<=k;m++){
		scanf("%d%d",&b[m],&c[m]);
		
	}
	for(m=1;m<=k;m++){
	
	int xiao,da;
		if(N(b[m],c[m])>M(b[m],c[m])){
			xiao=M(b[m],c[m]);da=N(b[m],c[m]);
		}
		else{xiao=N(b[m],c[m]);da=M(b[m],c[m]);
		}
	
		printf("%d\n",H(xiao,da));}
	return 0;
}