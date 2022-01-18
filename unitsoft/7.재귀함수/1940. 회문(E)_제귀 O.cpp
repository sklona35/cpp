#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n;
string s;
int mn=2;

void pdr(int fir, int sec, int chck) {
    /*if(fir==sec) {
        if(mn>chck) mn=chck;
        return;
    }*/
    if(fir>=sec){
    	mn=mn<chck? mn: chck;
    	return;	
	} 
    if(s[fir]==s[sec]) pdr(fir+1, sec-1, chck);
    else if(chck==0) {
        pdr(fir+1, sec, chck+1);
        pdr(fir, sec-1, chck+1);
         
    }
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>s;
        mn=2;
        pdr(0,s.length()-1,0);
        cout<<mn<<'\n';
    }
}
