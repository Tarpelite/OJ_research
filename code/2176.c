#include<stdio.h>
int is_zhi(int x)
{
    int i=2;
    for(i=2;i*i<=x;i++)
        {if(x%i==0)
        break;
        }
        if(i*i>x)return 1;
        else return 0;

}
int main()
{
    int n,j=1,t,k=0;
    scanf("%d",&n);
    while(k<1)
    {
        t=n+j;
        if(is_zhi(t))
         {
            printf("%d",t);
             k++;
         }
        j++;
    }
    return 0;
}