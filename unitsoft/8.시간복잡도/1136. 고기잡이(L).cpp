#include <cstdio>

int arr[1000][1000];

int main() {
	
	int N, M;
	int W, H;
	scanf("%d %d %d %d", &N, &M, &W, &H);
	for(int i=101;i<=N+100;i++) {
		for(int j=101;j<=M+100;j++) {
			int a;
			scanf("%d", &a);
			arr[i][j]=a+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
		}
	}
	int mx=0;
	for(int i=101;i<=N+100;i++) {
		for(int j=101;j<=M+100;j++) {
			//printf("%d ",arr[i][j]);
			int mm=arr[i][j]-arr[i-W][j]-arr[i][j-H]+arr[i-W][j-H];
			//printf("%d\n", mm); 
			if(mx<mm) mx=mm;
		}
		//printf("\n");
	}
	printf("%d",mx);
}
