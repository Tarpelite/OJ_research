#include <stdio.h>
int main()
{
	int n,m,i,j,k,l,arr[100000];
	for(i=0;i<100000;i++){arr[i]=0;}
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d\n",&m);
		arr[m]++;
	}
	scanf("%d",&k);
	l=99999;
	for(j=0;j<k;j++){
		i=l;
		while(arr[i]==0){i--;}
			l=i;
			m=arr[i];
			arr[i]=0;
	}
	printf("%d %d\n",l,m);
	return 0;
}