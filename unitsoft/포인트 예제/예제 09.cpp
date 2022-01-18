#include <cstdio>
#define m 10

void sum(int *a);

int main() {
	
	int a[m]={1,2,3,4,5,6,7,8,9,10};
	sum(a);
	
} 

void sum(int *a) {
	int i, hap = 0;
	for(i=0;i<m;i++) {
		hap += *(a+i);
	}
	printf("%d",hap);
}
