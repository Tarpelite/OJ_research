#include<stdio.h>

#include<math.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    k=n+1;
    i=2;
   while(i<k)
    {for(i=2; i<k; i++)
        {
            if(k%i==0)
                break;//最大公约数
        }
        if(i<k)
           {k++;
            i=2;}
        else if(i=k)
            break;
    }
    printf("%d",k);
    return 0;
}