#include<stdio.h> 
int main() { 
int n,m; 
double n1,m1,o1;
 double fact(int n);
 int ji; 
scanf("%d%d",&n,&m);
 if(n*m<=0||m>n) { ji=0; } 
else{n1=fact(n); m1=fact(m); o1=fact(n-m); ji=n1/(m1*o1); }
 printf("%d\n",ji); } 
double fact(int n)
 { int i; double sum; sum=1; for(i=1;i<=n;i++) { sum=sum*i; } 
return sum; 
}