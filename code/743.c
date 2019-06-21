#include<stdio.h>
int n(int[],int,int,int);
int m(int[],int,int,int);
int h(int[],int,int);
int main()
{ int a[102],nn,k;
  int l[102],r[102];
  int i,n1,mm,c;
  scanf("%d%d",&nn,&k);
  for(i=0;i<nn;i++)
  scanf("%d",&a[i]);
  for(i=0;i<k;i++)
  {
  scanf("%d%d",&l[i],&r[i]);
      n1=n(a,l[i],r[i],nn);
      mm=m(a,l[i],r[i],nn);
      if(mm<n1)
      {  c=mm;
         mm=n1;
         n1=c;
	  }
	  printf("%d",h(a,n1,mm));
	  if(i!=k-1)
	  printf("\n");

}
return 0;
}

int n(int a[],int l,int r,int nn)
{    int i,s=0;
     for(i=l;i<=r;i++)
     s=s+a[i]%nn;
     return s%nn;     
}
int m(int a[],int l,int r,int nn)
{    int i,s=1;
     for(i=l;i<=r;i++)
     s=(s*(a[i]%nn))%nn;
     return s%nn;     
}
int h(int a[],int l,int r)
{     int i,s=a[l];
      for(i=l+1;i<=r;i++)
        s=s^a[i];
        return s;
}