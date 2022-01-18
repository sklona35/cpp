#include <cstdio>
int arr[1111111]={};
int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++) {
		int a;
		scanf("%d ",&a);
		arr[i+1]=arr[i]+a;
	}
	for(int i=0;i<m;i++) {
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",arr[b]-arr[a-1]);
	}
}
