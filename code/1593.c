#include <stdio.h>
#include <stdlib.h>
#include<string.h>    //字符串头文件
int a[10000005],b[10000005];     //在主函数外面定义数组可以大一点（很多很多）

void kuaisu_jiang(int left,int right)
{
    if(left>=right)
        return ;
    int i=left;
    int j=right;
    int key=a[i];
    while(i<j)
    {
        while(i<j&&key>=a[j])   //顺序这里改
            j--;
        a[i]=a[j];
        while(i<j&&key<=a[i])   //还有这里（不清楚怎么改可以对照上面升序的函数）
        i++;
        a[j]=a[i];
    }
    a[i]=key;
    kuaisu_jiang(left,i-1);
    kuaisu_jiang(i+1,right);
}

#include <math.h>
int  main()
{
    int n,k,p=0,K,m=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
                scanf("%d",&a[i]);
            kuaisu_jiang(1,n);

    //for(int i=1;i<=n;i++)
   // scanf("%d",&a[i]);
    scanf("%d",&k);

    for (int j=1;j<=n;j++)
      {
         if(a[j]>a[j+1])
         {
            b[m]=a[j];
            m=m+1;
         }
      }
      K=b[k];
      for (int i=1;i<=n;i++)
      {
          if(a[i]==K)
          {
           p=p+1;
          }
      }
    printf("%d %d",K,p);
    return 0;
}