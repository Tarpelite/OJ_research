#include <stdio.h>
int comb(int,int);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",comb(m,n));
    return 0;
}
int comb(int m,int n)
{
if(m<1||n<1||m<n||m>20||n>20) return 0;
if(n==1) return m;
if(m==n) return 1;
return(comb(m-1,n)+comb(m-1,n-1));

}