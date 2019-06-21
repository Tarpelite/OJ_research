#include<stdio.h>
 # define N 10000002
  int a[N];
  void QuickSort(int *, int, int);
  void Swap(int *, int *);
int main()
{  int n,i,j,k,kk=0,ii,max,index;
  
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
   
   scanf("%d",&k);
  QuickSort(a,1,n);

   i=1;
   
     for(j=n-1;j>=1;j--)
       { if(a[j]!=a[j+1])
          i++;
          if(i==k)
          { kk++;
		  }
		  if(i==k&&kk==1)
		   ii=j;
	   }
   printf("%d %d",a[ii],kk);
   return 0;
}
void Swap(int *p, int *q)
{
    int buf;
    buf = *p;
    *p = *q;
    *q = buf;
    return;
}

void QuickSort(int *a, int low, int high)
{
    int i = low;
    int j = high;
    int key = a[low];
    if (low >= high)  //如果low >= high说明排序结束了
    {
        return ;
    }
    while (low < high)  //该while循环结束一次表示比较了一轮
    {
        while (low < high && key <= a[high])
        {
            --high;  //向前寻找
        }
        if (key > a[high])
        {
            Swap(&a[low], &a[high]);
            ++low;
        }
        while (low < high && key >= a[low])
        {
            ++low;  //向后寻找
        }
        if (key < a[low])
        {
            Swap(&a[low], &a[high]);
            --high;
        }
    }
    QuickSort(a, i, low-1);  //用同样的方式对分出来的左边的部分进行同上的做法
    QuickSort(a, low+1, j);  //用同样的方式对分出来的右边的部分进行同上的做法
}