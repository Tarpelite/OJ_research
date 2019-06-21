#include<stdio.h>
void qs(int *a,int,int);
int main(){
int n,i,j,k,flag=0,count=0,t;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
scanf("%d",&k);
qs(a,1,n);
for(i=n-1;flag<k;i--,flag++)
{
    if(a[i]==a[i-1])
        flag--;
}
t=a[i+1];
for(i=0;i<n;i++)
    if(a[i]==t)
        count++;
printf("%d %d",t,count);
return 0;}

void qs(int a[],int left,int right){
    if(left>=right){
    return ;}
    int i=left;
    int j=right;
    int key=a[left];
    while(i<j)
    {
        while(i<j&&key<=a[j]){
            j--;}
        a[i]=a[j];
        while(i<j&&key>=a[i]){
            i++;}
        a[j]=a[i];}
    a[i]=key;
    qs(a,left,i-1);
    qs(a,i+1,right);
}