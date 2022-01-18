#include <cstdio>

int main() {
	int n,m;
	scanf("%d %d", &n, &m);
	printf("%d+%d=%d\n",n,m,n+m);
	printf("%d-%d=%d\n",n,m,n-m);
	printf("%d*%d=%d\n",n,m,n*m);
	printf("%d/%d=%d\n",n,m,n/m);
	printf("%d%%",n);
	printf("%d=%d",m,n%m);
}
