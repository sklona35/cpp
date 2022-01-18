#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int v,h;
int idx=0;
char k;
int arr[10], chck[1000]={};
int ans[10];

void prt(int i) {
    if(i==h) return;
    printf("%c", ans[i]);
    prt(i+1);
}

void f(int i) {
    if(i==h) {
        prt(0);
        puts("");
        return;
    } 
    for(int j=1; j<=idx; j++) {
        if(chck[arr[j]]!=0) {
            ans[i]=arr[j];
            chck[arr[j]]--;
            f(i+1);
            chck[arr[j]]++;
        }
    }
}

int main() {
    cin>>v>>h;
    for(int i=0;i<v;i++){
        cin>>k;
        //cout<<k<<" ";
        if(chck[k]==0) {
            arr[idx+1]=k;
            idx++;
            chck[k]+=1;
        } else {
            chck[k]+=1;
        }
    }
    //cout<<"\n";
    sort(arr,arr+idx);
    f(0);
    //cout<<idx<<"\n";
   /* for(int i=1;i<=idx;i++) {
    	cout<<arr[i];
	}*/
}
