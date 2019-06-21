#include<stdio.h>
int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}
long cheng(int a,int b)
{   int i,s=1;
    for(i=b;i<=a;i++)s=s*i;
    return s;
}
int main()
{  int m,n;
   scanf("%d%d",&m,&n);
   int x;
   int k=max(n,m-n);
   long shang=cheng(m,k+1);
   long xia=cheng(m-k,1);
   int c=shang/xia;
   printf("%d",c);
}