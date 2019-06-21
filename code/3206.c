#include <stdio.h>
#include <stdlib.h>
int comp(const void*a,const void*b)
{
    return *(int*)a-*(int*)b;
}
int main()
{
    int n, k;
    int i;
    scanf("%d", &n);
    int A[n];
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);
    scanf("%d", &k);
    qsort(A, n, sizeof(int), comp);
    int flag = 1, max = A[n-1], site;
    for(i = n-1; i >= 0; i--)
    {
        if(A[i] < max)
        {
            flag++;
            max = A[i];
        }
        if(flag == k)
        {
            site = i;
            break;
        }
    }
    int num = 0;
    for(i = site; i >= 0; i--)
    {
        if(A[i] == A[site])
            num++;
        else break;
    }
    printf("%d %d", A[site], num);
    return 0;

}