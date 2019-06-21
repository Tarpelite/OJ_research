#include <stdio.h>
#include<math.h>
#include<string.h>

int num(int *,int,int);
int a[10000000];

void sort(int *, int, int);
int main( )
{
int j,k,i,n,q;
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
scanf("%d",&k);q=n;
sort(a,0,n-1);
for(j=0;j<k;j++)
    {
    n--;
    if(j>0&&a[n]==a[n+1])k++;
    }
printf("%d %d",a[n],num(a,q,a[n]));
return 0;
}


int num(int c[],int n,int b)
{
    int i,p=0;
   for(i=0;i<n;i++)
{
    if(b==c[i])p++;
}
    return p;
}



void sort(int *a, int left, int right)
{
    if(left >= right)
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];

    while(i < j)
    {
        while(i < j && key <= a[j])

        {
            j--;
        }

        a[i] = a[j];


        while(i < j && key >= a[i])

        {
            i++;
        }

        a[j] = a[i];
    }

    a[i] = key;
    sort(a, left, i - 1);
    sort(a, i + 1, right);

}