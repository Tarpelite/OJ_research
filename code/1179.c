#include<stdio.h>


typedef long long ll;

ll J(int x){
    ll j,i;
    j=1;
    for(i=1;i<=x;i++){
        j=j*i;
    };
    return j;
}

int main(){
    int m,n;
    scanf("%d%d",&n,&m);

	ll a,b,c;
	a=J(n);
	b=J(m);
	c=J(n-m);
	printf("%lld",a/(b*c));

    return 0;
}