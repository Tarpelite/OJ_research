int main(){
	
	int n,k,l,r;
	int N=0,M=1,H;
	int max=0,min=0;
	int a[1000];
	int t,b,p;
	
	scanf("%d %d",&n,&k);
	for(t=0;t<n;t++) scanf("%d",&a[t]);
	for(b=0;b<k;b++) {
		scanf("%d %d",&l,&r);
		for(t=l;t<=r;t++){
			N=N+a[t];
			M=M*a[t]%n;  
		}
		N=N%n;
		M=M%n;	
		
		if(M>N){
			max=M;
			min=N;
		}else if(M<N){
			max=N;
			min=M;
		}
		if(M==N){
			printf("%d\n",a[M]);
		}else { 
		        H=a[max];
				for(p=max-1;p>=min;p--){
				H=(int)H^a[p];
				}
				printf("%d\n",H); 
		}
		M=1;N=0;
	}
	
	return 0;
}
