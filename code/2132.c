#include <stdio.h>

int main() {
int b[100005]={0},n,k,l=0,m=0,r=0;

scanf("%d",&n);

for(r=0;r<n;r++)
{
    int i=0;
    scanf("%d",&i);
 b[i]++;
}


scanf("%d",&k);
for(m=100000;;m--)
{
    if(b[m]!=0) l++;
    if(l==k) break ;
    
}
printf ("%d %d",m,b[m]);

    return 0;
}