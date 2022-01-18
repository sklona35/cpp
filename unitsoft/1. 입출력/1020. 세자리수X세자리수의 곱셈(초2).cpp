#include <cstdio>

int main() {
	int n;
	int a,b,c;
	scanf("%d\n%1d%1d%1d",&n,&a,&b,&c);
	printf("%d\n%d\n%d\n%d",n*c,n*b,n*a,n*(100*a+10*b+c));
} 
