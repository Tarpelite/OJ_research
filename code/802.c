#include<stdio.h>

int main()
{

    int i,n,j,kiss=0;

    scanf("%d",&n);

    i=n;

    while(kiss==0)
    {

            kiss=1;

            i++;

        for(j=2;j<=(i/2)+1;j++)
        {

            if(i%j==0)
            {

               kiss=0;

               break;

            }

        }

    }

    printf("%d",i);

}