#include <stdio.h>
#define Num(x) (sizeof(x)/sizeof(x[0]))
int n;
int b[100001]={0};
int a[10000001]={0};
void quickSort(int a[], int _l, int _r);
void del_same(int [],int);

int main()
{
    int i, k;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);

    quickSort(a, 0, n-1);

    del_same(a, n);
    printf("%d %d\n", a[k-1], b[a[k-1]]);

    return 0;
}

void quickSort(int *a, int _l, int _r)
{
    if(_l <= _r){
        int l = _l, r = _r;
        int temp = a[l];
        while(l < r){
            while (l < r && a[r] <= temp) r--;
            a[l] = a[r];
            while (l < r && a[l] > temp) l++;
            a[r] = a[l];
        }
        a[l] = temp;
        quickSort(a, _l, l-1);
        quickSort(a, r+1, _r);
    }
}

void del_same(int date[],int n)
{
    int i,j,k,delete_index=0;
    k=0;
    for(i=0;i<n;++i)
    {
        if(date[i] != date[i+1])
        {
            b[date[i]]=i-k+1;
            date[delete_index]=date[i];
            delete_index++;
            k=i+1;
        }

    }
    if(k<n-1)
    {
        date[k+1]=date[n-1];
        if(date[k]==date[k+1])
           {
              b[date[k-1]]++;
              k--;
           }
    }


}