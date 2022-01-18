#include <cstdio>
#include <iostream>
using namespace std;

int n;
int arr[22];

void f(int hap, int i, int l) {
    if(hap==n) {
        for(int j=1; j<i; j++) {
            if(j==i-1) cout<<arr[j];
            else cout<<arr[j]<<"+";
        }
        cout<<"\n";
        return;
    }
    else if(hap>n) return;
    
    else{
        for(int k=n-1; k>0; k--) {
            if(l<k) continue;
            else {
                arr[i]=k;
                f(hap+k,i+1,k);
            }
        }
    }
    
}

int main() {
    cin>>n;
    
    f(0,1,n);
}
