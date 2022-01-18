#include <cstdio>

int main() {
	int a,b;
	int *pa, *pb;
	
	scanf("%d %d", &a, &b);
	pa=&a;
	pb=&b;
	
	printf("%d %d", *pa, *pb);
}
