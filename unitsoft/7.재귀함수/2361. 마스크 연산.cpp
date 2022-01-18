#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n,a[11],arr[33];//처음 받는 숫자, 연산에 쓰는 배열, 숫자 대입 함수 
string s[10];//문자열 저장 배열 
int chck[33];//알파벳 갯수 기억 
int mx=0;//출력 변수 
int g[26];//arr배열에 쓰는 0~9 숫자 저장 배열 
int cnt=0;//g배열에 쓰는 숫자
int p[10]={};

int mask() {//연산 함수  
	int k=0;
	for(int i=0;i<n;i++) {
		a[i]=0;
		for(int j=0;j<s[i].length();j++) {
			a[i]=a[i]*10+arr[g[s[i][j]-'A']];
		}
		k+=a[i];
	} 
	return k;
    //return 1;
}

void shake(int i) {//알파벳에 따른 0~9까지 숫자 대입 함수 
	//printf("%d ",i);
	if(i==10) {
		int l=mask();
		//printf("%d",i);
		if(mx<l) {
			/*for(int m=0;m<=9;m++){
				printf("%d ",arr[m]);
			}*/
			//puts(" ");
			mx=l;
		}
		return;
	}
	
	for(int j=0;j<=9;j++) {
		//printf("%d",chck[j]);
		if(p[j]==0) {
			arr[i]=j;
			p[j]++;
			shake(i+1);
			p[j]--;
		}
	}
}

int main() {
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		cin>>s[i];//숫자 입력 
		for(int j=0;j<s[i].length();j++) {
		    if(chck[s[i][j]]==0) {//전에 받은 숫자인지 확인 
		        g[s[i][j]-'A']=cnt;//받지 않았다면 받은 순서 기억 
		        cnt++;
		    }
		    chck[g[s[i][j]-'A']]++;//받은 갯수 기억  
		}
	}
	shake(0);
	printf("%d",mx);
} 
