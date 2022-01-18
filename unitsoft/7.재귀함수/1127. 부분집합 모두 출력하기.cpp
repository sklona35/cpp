#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[11];

void f(int i,int idx) {
    if(i==n) return;
    for(int j=i+1;j<n;j++) {
        arr[idx]=j;
        for(int k=0;k<=idx;k++) {
            printf("%c",arr[k]+'a');
        }
        puts(" ");
        f(j,idx+1);
    }
    
}

int main() {
    scanf("%d",&n);
    f(-1,0);
}
