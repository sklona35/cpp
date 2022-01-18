#include <cstdio>

int main() {
	int n;
	int *a;
	a=&n;
	*a=12;
	printf("&n = %x\n", &n);
	printf("a = %x\n", a);
	printf("n = %d\n", n);
	printf("*a = %d\n", *a);
}
