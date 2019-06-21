#include<stdio.h>
int N(int l,int r,int a[],int size)
{
    int sum=0,i;
    for(i=l;i<=r;i++)
        sum+=a[i];

    return sum%size;
}
int M(int l,int r,int a[],int size)
  {int sum=1,i;
    for(i=l;i<=r;i++)
        sum=((sum%size)*(a[i]%size))%size;

    return sum%size;

  }
  int H(int l,int r,int a[],int size)
  { int i=0,sum=a[l];
    for(i=l;i<r;i++)
        sum^=a[i+1];
    return sum;

  }
int main()
{
    int n,k,a[10000]={0},x,y,l,r,z[10000]={0},i=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {scanf("%d%d",&l,&r)==2;
       x= N(l,r,a,n);
       y= M(l,r,a,n);
     z[i]=H((x<y?x:y),(x>y?x:y),a,n);

    }
    for(i=0;i<k;i++)
    printf("%d\n",z[i]);
    return 0;
}