#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[100001],i,j,m,l,n;
	l=1;
	a[0]=2;
	double k,p;
	for(j=2;j<=100100;j++){
	p=j;
	k=sqrt(p);
		for(i=2;i<k+1;i++){
			m=j%i;
			if(m==0)
			    break;}
		if(m!=0){
		    a[l]=j;
		    l++;}}
	scanf("%d",&n);
	for(i=0;i<=100000;i++){
	    if(a[i]==n)
	        break;}
	printf("%d",a[i+1]);
	return 0;
}