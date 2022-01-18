#include <cstdio>

long long int n;
long long int farr[11111];

long long int fibo(long long int i) {
	if(i==1||i==0) return i;
	else if(farr[i]==0) {
		farr[i]=fibo(i-1)+fibo(i-2);
		return farr[i];
	}
	else if(farr[i]!=0) {
		return farr[i];
	}
	return fibo(i-1)+fibo(i-2);
}

int main() {
	
	scanf("%lld",&n);
	
	printf("%lld",fibo(n));
	
}
