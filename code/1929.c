#include <stdio.h>
#include <stdlib.h>
int arr[10000000];
int n;
void quickSort(int low,int high);
int main()
{
    int i,j,k,count=0,sort=1,re;
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%d",&arr[i]);
    scanf("%d",&re);
    quickSort(0,n-1);
    j = arr[0];
    for(i=1;i<n;++i){
        if(arr[i]!=j){
            k = j;
            j = arr[i];
            ++sort;
        }
        if(sort==re)
            ++count;
        if(sort>re)
            break;
    }
    printf("%d %d\n",k,count);
    return 0;
}
void quickSort(int low,int high)
{
    int key=arr[low],tmp;
    int l=low,r=high;
    if(l>=r) return;
    while(l<r){
        while(l<r && arr[r]<=key){--r;}
        if(arr[r]>key){
            tmp = arr[l];
            arr[l] = arr[r];
            arr[r] = tmp;
            ++l;
        }
        while(l<r && arr[l]>=key){++l;}
        if(arr[l]<key){
            tmp = arr[l];
            arr[l] = arr[r];
            arr[r] = tmp;
            --r;
        }
    }
    quickSort(low,l-1);
    quickSort(l+1,high);
}