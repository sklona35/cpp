#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n,k;
int arr[55];
int chck[55]={};
int mx=0;

void protain(int i, int musle) {
    if(musle<500) return;
    if(i==n) {
        mx++;
        return;
    }
    for(int j=0;j<n;j++) {
        if(chck[j]==0) {
            chck[j]+=n;
            protain(i+1,musle+arr[j]);
            chck[j]-=n;
        }
    }
}

int main() {
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        arr[i]-=k;
    }
    protain(0,500);
    cout<<mx;
}
