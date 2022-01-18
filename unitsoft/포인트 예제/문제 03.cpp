#include <cstdio>

int main() {
	char *first = "gildong", *last = "hong";
	char *temp;
	printf(" Name : %s %s \n", first, last);
	temp = first;
	first = last;
	last = temp;
	printf(" Name : %s %s \n", first, last);
}
