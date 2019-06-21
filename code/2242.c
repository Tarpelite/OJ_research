void sort(int *a, int left, int right)
{
    if(left >= right)
    {
        return ;
    }
    int i = left;
    int j = right;
    int key = a[left];
     
    while(i < j)                          
    {
        while(i < j && key <= a[j])
        
        {
            j--;
        }
         
        a[i] = a[j];
        
         
        while(i < j && key >= a[i])
        
        {
            i++;
        }
         
        a[j] = a[i];
    }
     
    a[i] = key;
    sort(a, left, i - 1);
    sort(a, i + 1, right);
                      
}
int main() {
	int n,i,j,k,t;
	
	scanf("%d\n",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
		scanf("%d\n",&a[i]);
	
	scanf("%d",&k);
	
	sort(a,0,n-1);
	int x = 0;
	if(k==1){
		t = a[n-1];
		for(i=n-1;i>=0;i--){
			if(a[i]==t){
				x++;
			}
		}
		printf("%d %d",t,x);
	}
	else{
		t = a[n-1];
		int K = 1;
		for(i=n-2;i>=0;i--){
			if(t!=a[i]){
			t = a[i];
			K++;
			}
			if(K == k){
			break;
		}}
		for(j=i;j>=0;j--){
			if(a[j]==t){
				x++;
			}
		}
		printf("%d %d",t,x);
	
		
	}


	return 0;
}