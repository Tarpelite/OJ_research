#include<stdio.h>
int main()
{
	int m,n,fz=1,fm=1,i;
	scanf("%d %d",&m,&n);
	if(m==0||n==0){
		printf("0");
	}
	else{
	if(n>(m/2)){
		n=m-n;
	}
	for(i=1;i<=n;i++){
		fz*=m;
		m--;
	}
	for(i=1;i<=n;i++){
		fm*=i;
	}
	printf("%d\n",fz/fm);
}
	return 0;
}