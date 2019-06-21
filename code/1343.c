#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int iszhishu(int i)
{
    int j;
    for(j=2;j<i;j++)
    {
        if(i%j==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<1000001;i++)
    {
        if(iszhishu(i))
        {
            printf("%d",i);
            return 0;
        }
    }
    return 0;

}