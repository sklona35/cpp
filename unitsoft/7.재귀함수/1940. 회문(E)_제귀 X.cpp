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
/*���ͷδ� �翷�� index�� Ȯ���ϰ� ���� ����������(���� +, ������ -) ���� �ٸ� ��� 
����, ������ �����ؼ� ���ʸ� ���ؼ� �������� 1�� ������ ����, �ʰ��� ȸ���� �ƴϴ�. �̷��� ��� 
