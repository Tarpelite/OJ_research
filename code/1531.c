#include <stdio.h>
double jiecheng(int);
int main(){
    int m,n;
    double a,b,c;
    scanf("%d %d",&m,&n);
    if(n>m){
    	n=m;
	}
    a=jiecheng(m);
    b=jiecheng(n);
    c=jiecheng(m-n);
    if(n==0){a=0;
	}  
    printf("%.0f",a/(b*c));
	return 0;
}
double jiecheng(int x)
{int i=1;
double value=1;  
while(i<=x){
	value=value*i;
	i++;
}
	return value;
}