#include<stdio.h>
int main()
{
	int i=0, j=0, flag=0;
	int n;
	scanf ("%d", &n);
	for (i=n+1;;i++){
		for (j=2;j*j<=i;j++){
			if (i%j==0){
				flag=1;
				break;
			}
			}
		if (flag==0){
			printf ("%d", i);
			break;
		}
		flag=0; 
	}
	return 0;
}