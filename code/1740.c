#include<stdio.h>
#include<math.h>

int n;
int max(int a,int b) {
if (a>b){
  return a;
}
else{
    return b;
}
}
int min(int a,int b) {
if (a<b){
  return a;
}
else{
    return b;
}
}
int Nu(int j[],int l,int r)
{
int k,h=0;
for(k=l;k<=r;k++){
h=h+j[k];
}
h=h%n;
return h;
}

int Mu(int j[],int l,int r)
{
int k,h=1;
for(k=l;k<=r;k++){
h=h*j[k];
h=h%n;
}
h=h%n;
return h;
}

int Hu(int j[],int l,int r)
{
int k,h=0;
h=j[l];
for(k=l+1;k<=r;k++){
h=h^j[k];
}
return h;
}


int main()
{
  int K,i;
  int N[1001]={0},M[1001]={0},H[1001]={0};
  int a[1001]={0},b[1001]={0},c[1001]={0};
  int ma,mi;
  scanf("%d",&n);
  scanf("%d",&K);
  for(i=0;i<=n-1;i++){
  scanf("%d",&a[i]);
  }
  for(i=1;i<=K;i++){
  scanf("%d %d",&b[i],&c[i]);
  }
  for(i=1;i<=K;i++){
  N[i]=Nu(a,b[i],c[i]);
  M[i]=Mu(a,b[i],c[i]);
  ma=max(N[i],M[i]);
  mi=min(N[i],M[i]);
  H[i]=Hu(a,mi,ma);
  }
  for(i=1;i<=K;i++){
  printf("%d\n",H[i]);
  }


  return 0;
  }