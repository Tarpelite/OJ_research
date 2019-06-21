int sumzuhe(int N, int K)
{
    if (K == 0)
        return 1;
    if (N == K)
        return 1;
    return sumzuhe(N - 1, K - 1) + sumzuhe(N - 1, K);
}
int main(){
	int N,K,sum;
	scanf("%d%d",&N,&K);
	sum=sumzuhe(N,K);
	printf("%d",sum);
	
}