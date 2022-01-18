#include <cstdio> 

int main() {
	int a[3][3]={1,5,6,2,4,7,2,5,8}, b[3][3]={7,1,6,3,4,7,4,5,7};
	int i, *pa, *pb;
	pa=&a[0][0];
	pb=&b[0][0];
	int mxa=0, mxb=0;
	//printf("%d %d", mxa, mxb);
	for(int i=0;i<9;i++) {
		mxa+=*(pa+i);
		mxb+=*(pb+i);
	}
	printf("%d %d", mxa, mxb);
}
