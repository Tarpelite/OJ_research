int ans(int m,int n)
{if(n==1)
return m;
if(n==m)
return 1;
return ans(m-1,n)+ans(m-1,n-1);
}
int main()
{int m,n;
scanf("%d%d",&m,&n);
printf("%d",ans(m,n));
return 0;
}
