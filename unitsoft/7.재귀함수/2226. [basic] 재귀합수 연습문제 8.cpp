#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n,arr[33][33];

void f(int w, int h, int i) {
    if(h==n-1 && w==n) {
    	cout<<arr[w][h-1]+arr[w-1][h-1]<<"\n";
        arr[w][h]=arr[w][h-1]+arr[w-1][h-1];
        return;
	}
    
    else if(w==i+1 && h!=n) {
        cout<<arr[w][h-1]+arr[w-1][h-1]<<"\n";
        arr[w][h]=arr[w][h-1]+arr[w-1][h-1];
        f(1,h+1,i+1);
    }
    
    else {
        cout<<arr[w][h-1]+arr[w-1][h-1]<<" ";
        arr[w][h]=arr[w][h-1]+arr[w-1][h-1];
        f(w+1,h,i);
    }
}

int main() {
    arr[1][0]=1;
    cin>>n;
    cout<<1<<"\n";
    f(1,1,1);
}
