#include <cstdio>
long long int A[1000009];
long long int B[1009]={1,};

int main() {
	long long int n,m,a,b;
	long long int sum=0;
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++) {
		scanf("%lld",&a);
		A[i]=(a+A[i-1])%m;
		B[A[i]]++;
	}
	for(int i=0;i<m;i++){
		b=B[i];
		if(b==0) sum+=0;
		else if(b==1) sum+=0;
		else sum += b*(b-1)/2; //nC2
	}
	printf("%lld",sum);
}
