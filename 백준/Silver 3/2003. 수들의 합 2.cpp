#include <cstdio>

int A[11111];

int main() {
	int N,M;
	scanf("%d %d",&N,&M);
	int k;
	for(int i=1;i<=N;i++) {
		scanf("%d",&k);
		A[i]=k+A[i-1];
	}
	int lf=0,rt=1;
	int cnt=0;
	while(1) {
		if(A[rt]-A[lf]==M) {
			cnt++;
			//printf("%d:%d %d\n",cnt,lf,rt);
		}
		if(rt==N&&lf==N-1) break;
		if(rt<N) rt++;
		else if(rt==N) {
			lf++;
			rt=lf+1;
		}
	}
	printf("%d",cnt); 
}
