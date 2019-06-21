
int main(){
    int a[100000]={},n,t,m,l;
    int i=0,j=0;
    scanf("%d",&n);
    while(i<n){
        scanf("%d",&m);
        a[m]++;
        i++;
    }
    i=0;
    l=0;
    while(i<100000){
        if(a[i]!=0){
            l=i;
        }
        i++;
    }
    scanf("%d",&t);
    i=l;
    j=0;
    while(i>0 && j<t){
        if(a[i]>0)
            j++;
        i--;
    }
    printf("%d %d",i+1,a[i+1]);
    return 0;
}
