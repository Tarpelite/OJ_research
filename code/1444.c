#include<stdio.h>
int zuhe(int m,int n)
{if(m<n||m<1||n<1)return 0;
if(m==n)return 1;
if(n==1)return m;
return zuhe(m-1,n)+zuhe(m-1,n-1);
}

int main(){
int m,n;
scanf("%d%d",&m,&n);
printf("%d",zuhe(m,n));
return 0;
}