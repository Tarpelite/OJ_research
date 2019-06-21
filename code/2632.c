#include<stdio.h>


int main()
{
    int n;
    int v=1,i,t,y=0,g,u;


    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        for(t=2;t<i;t++)
        {
            g=0;
            if(i%t==0){
                g++;
                break;
            }
        }
        if(g==0){
            u=i;
            break;
        }
    }
        printf("%d",u);

        return 0;
}