#include <cstdio>

int arr[1000][1000];

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i=0;i<m;i++) {
		int x1, y1, x2, y2;
		int mx=0;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for(int j=x1; j<=x2; j++) {
			for(int k=y1; k<=y2; k++){
				mx+=arr[j][k];
			}
		}
		printf("%d\n", mx);
	}
}
