int main() {
	int n,k;
	
	scanf("%d",&n);
	
	int i=1;
	while(i<100000){
		int j = 0;
		for(k=2;k<n+i;k++){
			if((n+i)%k==0){
				j++;
			}
			else{
			}
		}
		if(j==0){
				printf("%d",n+i);
				break;
			}
			else{
			}
		i++;
	}
	return 0;
}