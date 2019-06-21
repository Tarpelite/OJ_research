#include<stdio.h>
#include<string.h>
#include<math.h>
int n;
int get();
int main()
{
    scanf("%d",&n);
    printf("%d",get(n));

}
int get(int n)
{
    int i;
    while(1)
    {
        n++;
        int k=0;
        for (i=2;i<n;i++)
        {
            if(n%i==0)
            {
                k++;
            }
        }
        if(k==0)
            break;
    }
    return n;
}