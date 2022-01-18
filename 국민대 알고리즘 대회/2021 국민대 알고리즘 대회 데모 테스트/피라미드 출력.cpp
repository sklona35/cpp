#include <iostream>

using namespace std;

int n;

void star(int i, int j) {
    if(i==n+1) {
        return;
    }
	else if(j==i) {
        cout<<endl;
        star(i+1,0);
    }
    else {
        cout<<"*";
        star(i,j+1);
    }
}

int main(void) {
    cin>>n;
    star(1,0);
    return 0;
}
