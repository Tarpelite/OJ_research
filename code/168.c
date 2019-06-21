int main()
{
double m,n,x,y,z,i,M;
x=1;
y=1;
z=1;
scanf("%lf %lf",&m,&n);
for(i=1;i<=m;i++)
x=x*i;
for(i=1;i<= m-n;i++)
y=y*i;
for(i=1;i<=n;i++)
z=z*i;
M=x/(y*z);
printf("%.0f",M);
return 0;
}