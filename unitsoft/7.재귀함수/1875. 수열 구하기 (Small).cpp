#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int m,n;
int arr[10];
int chck[10];
int ans[10];
int c=0;

void f(int i, int end) {
    if(i==n) {
        for(int j=0; j<n; j++) {
           cout<<ans[j]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int j=0;j<c;j++) {
    	//if(ans[i-1]==arr[j]) continue;
    	if(chck[arr[j]]!=0) {
    		chck[arr[j]]--; 
        	ans[i]=arr[j];
        	f(i+1,j);
        	chck[arr[j]]++;
    	}
    }
}

int main() {
	int K[11];
    cin>>m>>n;
    for(int i=0;i<m;i++) {
        cin>>K[i];
        chck[K[i]]++;
        //cout<<arr[i]
    }
    sort(K,K+m);
    //int id=-1;
    for(int i=0;i<m;i++) {
    	if(K[i]==K[i+1]) continue;
    	arr[c]=K[i];
    	c++;
	}
    
    f(0,0);
}
