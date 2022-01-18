#include <cstdio>

long long arr[3333][3333];

int main() {
	int n;
	int a;
	scanf("%d",&n);
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {
			scanf("%d", &a);
			arr[i][j]=a+arr[i][j-1]+arr[i-1][j]-arr[i-1][j-1];
		}
	}
	long long int mx=0;
	for(int i=1;i<=n;i++) {
		 for(int j=1; j<=n; j++)  {
		 	int k=arr[i][j];
		 	if(mx<k) mx=k;
		 }
	}
	printf("%d",mx);
}
