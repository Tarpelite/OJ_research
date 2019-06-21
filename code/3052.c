#include<stdio.h>


long long asd(int a,int b)
{
    long long an=1;
    
    
    for(int i=a-b+1;i<a+1;i++)
    {
        
        
        an=an*i;
    }
    
    
    
    for(int i=1;i<=b;i++)an/=i;
    
    
    return an;
    
    
}


int main()
{
    int m,n;
    
    
    long long ans;
    
    
    scanf("%d%d",&n,&m);
    
    
    if(m==0){putchar('0'); return 0;}
    
    
    if(n<m)printf("%d",n);
    
    
    
    else printf("%lld",asd(n,m));
    
    
    return 0;
}