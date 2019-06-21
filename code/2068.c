#include  <stdio.h>

#define MAXNUM  100000
int count[MAXNUM];
int n,k;

int findnum()
{
int sumCount,v;

  for(sumCount = 0, v = MAXNUM-1; v >= 0; v--)
  {
	if (count[v]>0) sumCount += 1;
     if(sumCount == k) break;
  }
  return v;

}

int main()
{
int fnum;

   scanf("%d",&n);
   for (int i=0;i<MAXNUM;i++)
   {
   		count[i]=0;
   }

int num[n];

   for (int i=0;i<n;i++)
   {
   		scanf("%d",&num[i]);
   		count[num[i]]++;
   }
   scanf("%d",&k);
   fnum=findnum();
   printf("%d %d\n",fnum,count[fnum]);
   return 0;   
}