#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

//�Է°��� �迭�� �����ϰ� �� �迭�� �ε����� ����ؼ� �ҷ�����(ġȯ ����) 

int m,n;
int arr[10];
int chck[10];
int ans[10];
int Check_Number[33];
int c=0;
int K[11]={};

void f(int i, int end) {
    if(i==n) {
        for(int j=0; j<n; j++) {
           cout<<ans[j]<<" ";
        }
        cout<<"\n";
        return;
    }
    for(int j=0;j<c;j++) {
    	//if(ans[i-1]==arr[j]) continue;
    	if(chck[j]!=0) {
    		chck[j]--;
        	ans[i]=K[Check_Number[j]];
        	f(i+1,j);
        	chck[j]++;
    	}
    }
}

int main() {
    cin>>m>>n;
    int count=0;
    for(int i=0;i<m;i++) {
        cin>>K[i];
        //cout<<arr[i]
    }
    sort(K,K+m);
    int fir=0;
    for(int i=0;i<=m;i++) {
    	if(K[fir]!=K[i]) {
    		chck[count]=i-fir;
    		Check_Number[count]=fir;
    		fir=i;
    		count++;
		}
	}
    //int id=-1;
    for(int i=0;i<m;i++) {
    	if(K[i]==K[i+1]) continue;
    	arr[c]=K[i];
    	c++;
	}
	/*for(int i=0;i<count;i++) {
		printf("%d %d\n", chck[i], Check_Number[i]);
	}*/
    //printf("%d %d",count,c);
    f(0,0);
}
