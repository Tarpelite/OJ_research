#include<stdio.h>
int is(int m){
	int p=0,i=2;
	for(i=2;i<m;i++){
		if(m%i!=0) p++;}
	if(p==(m-2))	return m;
	else return m-1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int m;
	m=n+1;
	while(m!=is(m))	m++;
	printf("%d\n",m);

	return 0;
}