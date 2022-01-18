#include <cstdio>

int main() {
	int n;
	int mx=0,mn=1111;
	
	scanf("%d", &n);
	int a;
	for(int i=0;i<n;i++) {
		scanf("%d",&a);
		if(a>mx) mx=a;
		if(a<mn) mn=a;
	}
	printf("%d %d",mx,mn);
}
