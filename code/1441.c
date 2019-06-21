int Niupple(int x,int y,int *a,int n){
	int i,sum=0;
	for(i=x;i<=y;i++){
	    sum += a[i];
		sum = sum%n;
	}
		return sum;
}
int MountVoom(int x,int y,int *a,int n){
	int i,sum=1;
	for(i=x;i<=y;i++){
		sum *= a[i];
		sum = sum%n;
	}
		return sum;
}
int HugeGun(int x,int y,int *a){
	int i,sum;
	sum = a[x];
	for(i=x+1;i<=y;i++)
		sum = sum^a[i] ;
		return sum;
}
int Max(int x,int y){
	if(x>=y){
		return x;
	}
	else{
		return y;
	}
}
int Min(int x,int y){
	if(x<=y){
		return x;
	}
	else{
		return y;
	}
}
int main() {
	int n,K,i;
	
	scanf("%d %d\n",&n,&K);
	
	int a[100];
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int l,r,b[100];	
	for(i=0;i<K;i++){
		scanf("%d %d",&l,&r);
		int N=Niupple(l,r,a,n);
		int M=MountVoom(l,r,a,n);
		b[i] = HugeGun(Min(N,M),Max(N,M),a);
	}
	for(i=0;i<K-1;i++)
		printf("%d\n",b[i]);
		printf("%d",b[K-1]);

	return 0;
}