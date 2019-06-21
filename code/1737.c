#include <stdio.h>
int m_n(int,int);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",m_n(m,n));
}

int m_n(int m,int n){
if(m<n||m<1||n<1)
    return 0;
    if(n==1)
        return m;
    if(n==m)
        return 1;
    return m_n(m-1,n)+m_n(m-1,n-1);
}