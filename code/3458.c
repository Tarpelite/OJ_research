#include <stdio.h>

int comb_num(int m,int n)
{
    if(n==1)
        return m;
    if(m==n)
        return 1;
    if(m<n)
        return m;
    return comb_num(m-1,n)+comb_num(m-1,n-1);

}
int main()
{
    int m,n,p;
    scanf("%d %d",&m,&n);
    p=comb_num(m,n);
    printf("%d",p);
    return 0;
}