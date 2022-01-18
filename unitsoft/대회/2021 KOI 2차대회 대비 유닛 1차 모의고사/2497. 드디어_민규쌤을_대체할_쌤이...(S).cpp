#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int N,M,L;
int arr[1111];
int mx=0;

bool cmt(int i, int j) {
	return i<j;
}

void sam(int idx, int hap) {
    if(hap>M) return;
    if(idx>=N) {
        
        return;
    }
    if(mx<hap) mx=hap;
    sam(idx+1,hap+arr[idx+1]);
}

int main() {
	cin>>N>>M>>L; 
    for(int i=1;i<=N;i++) {
        cin>>arr[i];
        
    }
    //sort(1,n,cmt);
    for(int i=1;i<=N;i++) {
    	for(int j=1;j<N;j++) {
    		if(arr[j]>arr[j+1]) {
    			int temp = arr[j];
    			//cout<<arr[j]<<" "<<temp<<" ";
    			arr[j] = arr[j+1];
    			//cout<<arr[j+1]<<" ";
    			arr[j+1] = temp;
    			//cout<<arr[j+1]<<" "<<arr[i];
    			//puts("");
			}
		}
	}
    
    for(int i=1;i<=N; i++) {
    	//cout<<arr[i]<<" ";
        if(arr[i]>=L) {
            sam(i,arr[i]);
        }
    }
    puts("");
    cout<<mx;
}
