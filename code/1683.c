#include<stdio.h>
int main(){
	int m,n;
	long long int x=1,y=1,z=1,k;
	scanf ("%d%d",&m,&n);
	int p=m-n;
	while (m>1) {x=x*m;m--;}
	while (n>1) {y=y*n;n--;}
	while (p>1) {z=z*p;p--;}
	k=x/(y*z);
	printf ("%d",k);
	return 0;
}