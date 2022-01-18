#include <cstdio>

int arr[33333]={};
int brr[3333]={};

int main() {
	int N,d,k,c;
	scanf("%d %d %d %d", &N, &d, &k, &c);
	for(int i=0;i<N;i++) {
		scanf("%d", &arr[i]);
	}
	int mx=0;
	for(int i=0;i<N;i++) {
		int mm=0;
		brr[c]=1;
		for(int j=0;j<k;j++) {
			if(brr[arr[(i+j)%N]]==0) {
				brr[arr[(i+j)%N]]++;
				mm++;
			}
		}
		if(mm>mx) mx=mm;
		for(int j=0;j<N;j++) {
			brr[arr[j]]=0;
		}
	}
	printf("%d",mx);
}
