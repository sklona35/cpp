#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int n,a[11],arr[33];//ó�� �޴� ����, ���꿡 ���� �迭, ���� ���� �Լ� 
string s[10];//���ڿ� ���� �迭 
int chck[33];//���ĺ� ���� ��� 
int mx=0;//��� ���� 
int g[26];//arr�迭�� ���� 0~9 ���� ���� �迭 
int cnt=0;//g�迭�� ���� ����
int p[10]={};

int mask() {//���� �Լ�  
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

void shake(int i) {//���ĺ��� ���� 0~9���� ���� ���� �Լ� 
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
		cin>>s[i];//���� �Է� 
		for(int j=0;j<s[i].length();j++) {
		    if(chck[s[i][j]]==0) {//���� ���� �������� Ȯ�� 
		        g[s[i][j]-'A']=cnt;//���� �ʾҴٸ� ���� ���� ��� 
		        cnt++;
		    }
		    chck[g[s[i][j]-'A']]++;//���� ���� ���  
		}
	}
	shake(0);
	printf("%d",mx);
} 
