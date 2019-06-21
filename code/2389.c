long long jc(int x){
	int i;
	long long s=1;
	for(i=1;i<=x;i++){
		s = s*i;
	}
	return s;
}
int main() {
	int m,n; 
	scanf("%d %d",&m,&n);
	
	printf("%lld",jc(m)/(jc(m-n)*jc(n)));
	return 0;
}