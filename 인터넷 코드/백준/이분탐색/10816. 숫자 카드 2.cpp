#include <cstdio>
#include <iostream>
#include<algorithm>
using namespace std;
int arr[555555];
int main() {
	int n,m;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	scanf("%d",&m);
	sort(arr, arr+n);
	while(m--){
		int x;
		scanf("%d",&x);
		int id = lower_bound(arr, arr+n, x ) - arr;
		int id2 = upper_bound(arr, arr+n, x) - arr;
		printf("%d ",id2 - id);
		//6 3 2 10 10 10 -10 -10 7 3
	}
	
	return 0;
}
