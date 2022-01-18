#include <cstdio>

int main() {
	int b[]={11,22,33,44,55,66};
	int i, *pb;
	pb=&b[0];
	for (i=0;i<6;i++) {
		printf("%d", *(pb+i));
	}
}
