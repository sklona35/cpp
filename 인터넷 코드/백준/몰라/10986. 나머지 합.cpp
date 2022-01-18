#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;

int n,m,a[1000000],sum[1000000];
int mx;

int main() {
	
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		sum[i]=sum[i-1]+a[i];
	}
	
	for (int i=0;i<n;i++) {
		for(int j=0;j<i+1;j++){
			//if(i==j) continue;
			if((sum[i]-sum[j])%3==0) {
				//printf("%d %d\n",i, j);
				mx++;
			}
		}
	}
	printf("%d",mx-2);
}
