#include <cstdio>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int arr[33];
int n,chck[33],g[33],cnt=0;
string s[33];
int p[33]={},mx=0;
int a[33]={};

int mask() {
	int k=0;
	for(int i=0;i<n;i++) {
		a[i]=0;
		for(int j=0;j<s[i].length();j++) {
			//printf("%d",arr[g[s[i][j]-'A']]);
			a[i]=a[i]*10+arr[g[s[i][j]-'A']];
		}
		k+=a[i];
	}
	return k;
}

void shake(int i) {
	if(i==10) {
		int l=mask();
		//printf("%d\n",l);
		if(mx<l) mx=l;
		return;
	}
	for(int j=0;j<10;j++) {
		if(p[j]==0) {
			p[j]++;
			arr[i]=j;
			shake(i+1);
			p[j]--;
		}
	}
}

int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) {
		cin>>s[i];
		for(int j=0;j<s[i].length();j++) {
			if(chck[s[i][j]-'A']==0) {
				g[s[i][j]-'A']=cnt;
				cnt++;
			}
			chck[s[i][j]-'A']++;
		}
	}
	shake(0);
	printf("%d",mx);
	return 0;
}
