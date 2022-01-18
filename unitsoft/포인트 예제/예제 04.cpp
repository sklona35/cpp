#include <cstdio>

int main () {
	const char *a = "seoul";
	int i=0;
	while(*(a+i)!=NULL) {
		printf("*(a+%d)==>%c\n", i, *(a+i));
		i++;
	}
}
