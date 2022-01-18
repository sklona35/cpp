#include <cstdio> 

int now[3],mxhap[3],mnhap[3],tempmx[3],tempmn[3];

int main() {
	int N;
	scanf("%d ",&N);
	
	for(int i=1;i<=N;i++) {
		
		scanf("%d %d %d",&now[1], &now[2], &now[3]);
		if(i==1) {
			for(int j=1;j<=3;j++) {
				mxhap[j]=now[j];
				mnhap[j]=now[j];
			}
			continue;
		}
		for(int j=1;j<=3;j++) {
			//printf("check");
			int mx=0,mn=900000;
			for(int k=-1;k<=1;k++) {
				//printf("check");
				if(j+k<1 || j+k>3) continue;
				if(now[j]+mxhap[j+k]>mx) {
					mx=now[j]+mxhap[j+k];
					tempmx[j]=mx;
					printf("mx %d:%d\n",j,mx);
				}
				if(now[j]+mnhap[j+k]<mn) {
					mn=now[j]+mnhap[j+k];
					tempmn[j]=mn;
					printf("mn %d:%d\n",j,mn);
				}
			}
		}
		for(int j=1;j<=3;j++) {
			mxhap[j]=tempmx[j];
			mnhap[j]=tempmn[j];
		}
	}
	int mx=0,mn=900000;
	for(int i=1;i<=3;i++) {
		if(mx<mxhap[i]) mx=mxhap[i];
		if(mn>mnhap[i]) mn=mnhap[i];
	}
	printf("%d %d",mx,mn);
} 
