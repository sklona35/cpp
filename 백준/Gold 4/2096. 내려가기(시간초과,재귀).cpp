#include  <cstdio>
//#define long long int

int arr[100000][3];
int N,mx=0,mn=10;

void dfs(int i, int sum, int h) { // i 받은 위치, sum 핳, h 높이 
	//if(h==0) printf("%d",i);
	if(h==N) {
		
		if(sum>mx) mx=sum;
		if(sum<mn) mn=sum;
		//printf("끝 %d %d %d\n",sum,mx,mn);
		return;
	}	
	for(int j=-1; j<=1; j++) {
		if(i+j<1 || i+j>N) continue;
		else {
			//printf("과정 %d %d %d %d\n",i,j,h+1,arr[h+1][i+j]);
			dfs(i+j,sum+arr[h+1][i+j],h+1);
		}
	}
	return;
}

int main() {
	
	scanf("%d",&N);
	
	for(int i=1; i<=N; i++) {
		for(int j=1; j<=3; j++) {
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(int i=1; i<=3; i++) {
		//printf("%d",i);
		dfs(i,0,0);
	}
	printf("%d %d",mx,mn);
}
