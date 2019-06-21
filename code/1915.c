#include <stdio.h>
int Nfunction(int zongdeshu,int xiaodeshu,int dadeshu,int shuzu[]);
int Mfunction(int zongdeshu,int xiaodeshu,int dadeshu,int shuzu[]);
int Hfunction(int xiaodeshu,int dadeshu ,int shuzu[]);
int main()
{
    int n,K;
    scanf("%d %d",&n,&K);
    int i=0,k=0;
    int a[1000]={0},b[1000]={0},c[1000]={0},d[1000]={0},e[1000]={0};
    while (i<=n-1)
    {
        scanf("%d",&a[i]);
        i++;
    }
    while (k<=K-1)
    {
        scanf("%d %d",&b[k],&c[k]);
        k++;
    }
    for (k=0; k<=K-1; k++)
    {
        d[k]=Nfunction(n,b[k],c[k],a);
        e[k]=Mfunction(n,b[k],c[k],a);
        if(d[k]<=e[k])
        {
            printf("%d\n",Hfunction(d[k],e[k],a));
        }
        else
        {
            printf("%d\n",Hfunction(e[k],d[k],a));
        }
    }
    
}

int Nfunction(int zongdeshu,int xiaodeshu,int dadeshu,int *shuzu)
{
    int sum=0,s;
    for(s=xiaodeshu;s<=dadeshu;s++)
    {sum+=shuzu[s];}
    return sum%zongdeshu;
}

int Mfunction(int zongdeshu,int xiaodeshu,int dadeshu,int *shuzu)
{
    int s,product=1;
    for (s=xiaodeshu; s<=dadeshu; s++)
    {
        if(product%zongdeshu==0)
        {
            product=0;
            break;
        }
        else
        {
            product*=shuzu[s];
            product=product%zongdeshu;
        }
    }
    return product%zongdeshu;
}

int Hfunction(int xiaodeshu,int dadeshu,int *shuzu)
{
    int s,sample=0;
    for (s=xiaodeshu; s<=dadeshu; s++)
    {
        sample=(sample)^(shuzu[s]);
    }
    return sample;
}