#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(vector<vector<int> > v) {
    vector<int> ans;
    
    int a, b;
    if(v[0,0]!=v[1,0] && v[1,0]==v[2,0]) {
        a=(int)v[0,0];
    }
    if(v[0,0]!=v[1,0] && v[1,0]!=v[2,0]) {
        a=(int)v[1,0];
    }
    if(v[0,0]==v[1,0] && v[1,0]==v[2,0]) {
        a=(int)v[2,0];
    }
    
    
    if(v[0,1]!=v[1,1] && v[1,1]==v[2,1]) {
        b=(int)v[0,1];
    }
    if(v[0,1]!=v[1,1] && v[1,1]!=v[2,1]) {
        b=(int)v[1,1];
    }
    if(v[0,1]==v[1,1] && v[1,1]!=v[2,1]) {
        b=(int)v[2,1];
    }
    
    printf("%d,%d",a,b);
    //v[0][1];
    
    

    return ans;
}
