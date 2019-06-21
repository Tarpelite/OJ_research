#include<stdio.h>
int main()
{
    int n,i,y,a;
    scanf("%d",&n);
    int m;
    for(m=n+1;;m++)
    {
        for(i=2;i<m;i++)
        {
            y=m%i;
            if(y==0)
            {
                a=0;
                break;
            }
            else{
                a=1;
            }
        }
        if(a==1)
        {
            break;
        }
    }
    printf("%d",m);
    return 0;
}