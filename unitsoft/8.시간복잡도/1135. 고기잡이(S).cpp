#include <cstdio>

int main() {
	int n,w,arr[111]={};
	scanf("%d %d",&n,&w);
	int a;
	for(int i=0;i<n;i++) {
		scanf("%d",&a);
		arr[i+1]=arr[i]+a;
	}
	int mx=0;
	for(int i=w;i<=n;i++){
		if(mx<arr[i]-arr[i-w]) mx=arr[i]-arr[i-w];
	}
	printf("%d",mx);
}
