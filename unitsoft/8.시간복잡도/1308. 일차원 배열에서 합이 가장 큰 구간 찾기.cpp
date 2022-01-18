#include <cstdio>
long long int arr[111111]={};
int main() {
	long long int n;
	scanf("%d",&n);
	long long int mx=-222222;
	long long int a;
	for(int i=0;i<n;i++) {
		scanf("%lld",&a);
		if(arr[i]+a<0) {
			arr[i+1]=0;
		}
		if(mx<arr[i]+a) mx = arr[i]+a;
		if(arr[i]+a>0){
			arr[i+1]=arr[i]+a;
		}
	}
	printf("%lld",mx);
	/*for(int i=1;i<=n;i++) {
		printf("%d ",arr[i]);
	}*/
} 
