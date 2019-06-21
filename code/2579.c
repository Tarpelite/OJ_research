#include<stdio.h>
#include<stdlib.h>
int cmpDec(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}


int main()
{
    int n;int i;int k;int m;
    scanf("%d",&n);
    int s[n];
    for (i=0;i<n;i++)
        {
            scanf("%d",&s[i]);
        }
    scanf("%d",&k);
    int ans;
    qsort(s, n, sizeof(int), cmpDec);
    for (i=0,ans=1;ans<k;i++)
    {
        if (s[i]>s[i+1]) ans++;
    }
    int times=1;int det =s[i];
    for (;det==s[i];i++,times++)
    ;
    printf("%d %d",det,times-1);
    return 0;
}