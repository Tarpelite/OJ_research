#include <stdio.h>
#include <stdlib.h>
int a[100005];
int main()
{
    int n,i,m,k,c,count;
    c=100003;
    count = 0;
    scanf ("%d",&n);


    for (i=1;i<=n;i++)
        {
            scanf ("%d",&m);
            a[m]++;
        }
    scanf ("%d",&k);

    for(;c >= 1; --c){
        if(a[c] != 0)
            count++;
        if(count == k)
            break;
    }


    printf("%d %d\n",c,a[c]);
    return 0;
}