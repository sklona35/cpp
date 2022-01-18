#include <cstdio>

int arr[3333333];
int brr[3333333];

int main() {
	
	int N, d, k, c;
	
	scanf("%d %d %d %d", &N, &d, &k, &c);
	
	for(int i=1;i<=N;i++) {
		scanf("%d", &arr[i]);
	}
	
	int mx=0;
	
	for(int i=1;i<=N;i++) {
		int mm=1;
		brr[c]=1;
		for(int j=0;j<k;j++) {
			if(brr[arr[i+j]%N]==0) {
				brr[arr[i+j]%N]=1;
				mm++;
			}
		}
		if(mm==k+1) {
			mx=mm;
			break;
		}
		if(mx<mm) mx=mm;
		for(int l=i;l<=i+k;l++) {
			if(brr[arr[l]%N]!=0) brr[arr[l]%N]=0;
		}
	}
	printf("%d",mx);
}
