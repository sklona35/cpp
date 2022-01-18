#include <cstdio>

long long arr[3333][3333];

int main() {
	int n,m;
	int a;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%d", &a);
			arr[i][j]=a+arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
		}
	}
	for(int i=0;i<m;i++) {
		int x1, y1, x2, y2;
		long long mx=0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		mx+=arr[x2][y2]-arr[x1-1][y2]-arr[x2][y1-1]+arr[x1-1][y1-1];
		printf("%lld\n", mx);
	}
}
