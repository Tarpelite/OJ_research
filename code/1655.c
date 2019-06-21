#include<stdio.h>
int a[10000005];
void QuickSort(int *,int ,int );
int main(void)
{
    int n,k,i,j,p=1,cout=0,need;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(i!=n)
        scanf("%d",&a[i]);
        else scanf("%d",&k);
    }
    QuickSort(a,0,n-1);
    if(k==1)
        need=a[n-1];
    else
    {

        for(i=n-1;i>0;i--)
        {
            p=(a[i]==a[i-1])?p:p+1;
            if(p==k)
            {
                need=a[i-1];
                break;
            }
        }

    }
    for(i=0;i<n;i++)
    {
        cout=(a[i]!=need)?cout:cout+1;
    }
    printf("%d %d",need,cout);

}
void QuickSort(int *a, int low, int high)
{
    int i = low;
    int j = high;
    int key = a[low];
    if (low >= high)
    {
        return ;
    }
    while (low < high)
    {
        while (low < high && key <= a[high])
        {
            --high;
        }
        if (key > a[high])
        {
            a[low] = a[high];
            ++low;
        }
        while (low < high && key >= a[low])
        {
            ++low;
        }
        if (key < a[low])
        {
            a[high] = a[low];
            --high;
        }
    }
    a[low] = key;
    QuickSort(a, i, low-1);
    QuickSort(a, low+1, j);
}