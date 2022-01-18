#include <cstdio>

long long int tree[1111111];

int f(int n,int k) {
	if(n<=k) return 0;
	else if(n>k) return n-k;
	return 1;
}

int main() {
	long long int N, M;
	scanf("%lld %lld",&N,&M);
	long long int mx=0;
	for(int i=0;i<N;i++) {
		scanf("%lld",&tree[i+1]);
		if(tree[i+1]>mx) mx=tree[i+1];
	}
	long long int lf=0,rt=mx;
	//printf("%d %d %d\n",lf,k,rt);
	while(lf!=rt) {
		long long int mid = (lf+rt+1)/2;
		long long int sum = 0;
		
		for(int i=1;i<=N;i++) {
			sum+= tree[i]-mid>0?tree[i]-mid:0;
		}
		
		if(sum>=M) lf=mid;
		else if(sum<M) rt=mid-1;
	}
	printf("%d",lf);
}
