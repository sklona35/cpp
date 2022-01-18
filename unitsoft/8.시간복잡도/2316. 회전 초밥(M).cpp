#include <cstdio>

int arr[33333]={};
int brr[3333]={};

int main() {
	int N, d, k, c;
	scanf("%d %d %d %d", &N, &d, &k, &c);
	for(int i=0;i<N;i++) {
		scanf("%d", &arr[i]);
		arr[i+N]=arr[i];
	}
	int mx=0;
	for(int i=0;i<N;i++) {
		int mm=1;
		brr[c]=1;
		for(int j=0;j<k;j++) {
			//printf("%d ", arr[i+j]);
			if(brr[arr[i+j]]!=1) {
				brr[arr[i+j]]++;
				//printf(".%d ", arr[i+j]);
				mm++;
			}
		}
		//printf("%d\n", mm);
		if(mm>mx) {
			mx=mm;
			//printf("%d\n", mx);
		}
		//arr[30]={};
		for(int l=i;l<=i+k;l++) {
			if(brr[arr[l]]!=0) brr[arr[l]]=0;
		}
	}
	printf("%d",mx); 
}

