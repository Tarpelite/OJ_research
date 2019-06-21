#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j; 
	int b[100001], a[100001] ={0};
	int n,t,m;
	scanf("%d",&n);
	int x =1;
	for (i=0;i<n;i++){
		scanf("%d",&t);
		a[t]++;	
}
for (i=100000;i>0;i--){
	 if (a[i]!=0){
		b[x] = i; 
		
		x++;
	}
}

scanf("%d",&m);
printf ("%d %d",b[m],a[b[m]]);

	
	return 0;
}