# include <stdio.h>
int main()
{
		long long n,i;
		scanf("%lld",&n);
		for(n++; ;n++){
				for(i=2;i<=n;i++){
						if(n%i==0){
								break;
						}
						if(i==n-1){
								printf("%lld\n",n);
								break;
						}
				}
		if(i==n-1)
		break;
	}
}