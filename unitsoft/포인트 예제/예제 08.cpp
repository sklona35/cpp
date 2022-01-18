#include <cstdio>

void add(int a, int b, int *sum);

int main() {
	int sum;
	add(10,20,&sum);
	printf("sum = %d", sum);
}

void add(int a, int b, int *sum) {
	*sum = a + b;
}
