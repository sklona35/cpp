#include <cstdio>

void f(int i,int j) {
	if(i%j==0) {
		printf("%d",j);
	}
	else f(j,i%j);
}

int main() {
	int a, b;
	scanf("%d %d",&a,&b);
	if(a>=b) f(a,b);
	else f(b,a);
	return 0;
}