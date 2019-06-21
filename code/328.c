# include <stdio.h>
int main ()
{   
    int a;
    scanf("%d",&a);
    int i,status;
    while(1)
    {
        status = 0;
        a++;
        for(i=2;i<=a/2;i++)
        {
            if(a%i == 0)
                status =1;
        }
        if(status == 0)
            break;
    }
    printf("%d",a);
    return 0;
}