#include <cstdio>
#include <iostream>
#include <stack>
using namespace std;

//stack <int> roof;

void pdr(string s) {
    stack<char> r;
    int chck=0;
    for(int i=0;i<=s.length()/2;i++) {
        r.push(s[i]);
    }
    for (int i=s.length()/2;i<s.length();i++) {
        if(r.top()==s[i]) {
            r.pop();
        }
        else {
            chck++;
            continue;
        }
    }
    chck+=r.size();
    if(chck==0) printf("0\n");
    else if(chck==1) printf("1\n");
    else printf("2\n");
    return; 
}

int main() {
    int n;
    cin>>n;
    string l;
    for(int i=0;i<n;i++) {
        
        cin>>l;
        pdr(l);
    }
}
/*제귀로는 양옆의 index를 확인하고 서로 좁혀나가며(왼쪽 +, 오른쪽 -) 서로 다를 경우 
왼쪽, 오른쪽 선택해서 한쪽만 ±해서 무리없이 1번 만나면 유사, 초과면 회문이 아니다. 이렇게 출력 
