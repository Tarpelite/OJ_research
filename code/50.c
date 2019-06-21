int main(int argc, char *argv[]) {
 	int m , n;
 	int p;
 	long long a,b;
 	long long k;	
 	a=1;b=1;
 	scanf("%d %d",&m,&n);
 	for(p=1;p<=n;p++)
 	a=a*p;
 	for(p=m;p>m-n;p--)
 	b=b*p;
 	k=b/a;
 	printf("%lld",k);
	return 0;
}