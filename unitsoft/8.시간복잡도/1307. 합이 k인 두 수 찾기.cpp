#include <cstdio>
int arr[55555]={};
int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	int k;
	arr[n]=0;
	scanf("%d",&k);
	int left=0,right=n-1;
	while(arr[left]+arr[right]!=k) {
		if(arr[left]+arr[right]>k) {
		    right--;
		    if(left==right) {
			           left=n;
			    right=n;
		    	break;
	    	}
		}
		else if(arr[left]+arr[right]<k) {
		    left++;
		    if(left==right) {
			    left=n;
			    right=n;
			    break;
		    }
		}
	}
	printf("%d %d" , arr[left], arr[right]);
}
