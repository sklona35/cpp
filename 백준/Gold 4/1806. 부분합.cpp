#include <cstdio>

int arr[1111111];

int main() {
	
	int N,S;
	
	scanf("%d %d",&N,&S);
	
	
	for(int i=1; i<=N; i++) {
		int a;
		scanf("%d",&a);
		arr[i]=a+arr[i-1];
	}
	
	int fs=0,sc=0;
	int mn=9999999;
	
	while(1) {
		//printf("반복 ");
		if(sc>N) break;
		if(arr[sc]-arr[fs]<S) {
			//printf("확인 1 %d %d %d\n",arr[sc]-arr[fs], fs, sc);
			sc++;
		}
		else if(arr[sc]-arr[fs]>=S) {
			//printf("확인 2 %d %d %d\n", arr[sc]-arr[fs], fs, sc);
			if(mn>sc-fs) mn=sc-fs;
			fs++;
		}
	}
	if(mn!=9999999) printf("%d",mn);
	else printf("0");
}
