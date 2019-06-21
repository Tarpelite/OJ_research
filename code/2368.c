#include<stdio.h>

int main()
{
    int n,i,a,b;

    scanf("%d",&n);

    for(i=n+1;;i++)
    {
        a = 0;
        for(b=2;b<i;b++){
                if(i%b==0){
                    a++;
                }
        }

        if(a==0){
            printf("%d\n",i);
            break;
        }
    }

    return 0;

}