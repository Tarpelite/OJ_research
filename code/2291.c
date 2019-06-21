#include<stdio.h>
void paixu(int[],int);
int a[10000001];
int main()
{
    int n,k,i,m,count=0,c=1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    quick_sort(a,0,n);
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(m>a[i]&&c<k)
        {
            m=a[i];
            c+=1;
        }
        if(c==k&&m==a[i])
        {
            count+=1;
        }
    }

    printf("%d %d",m,count);
    return 0;

}

void quick_sort(int a[], int l, int r)
 {
    if (l < r)
     {
         int i,j,x;

         i = l;
         j = r;
         x = a[i];
         while (i < j)
         {
             while(i < j && a[j] < x)
                 j--;
             if(i < j)
                 a[i++] = a[j];
             while(i < j && a[i] >x)
                 i++;
             if(i < j)
                 a[j--] = a[i];
         }
         a[i] = x;
         quick_sort(a, l, i-1);
         quick_sort(a, i+1, r);
     }
 }