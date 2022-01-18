#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
	int a,b;
	int arr[100001];
	scanf("%d",&a);
	int j;
	
	for(int i=0;i<a;i++) {
		scanf("%d",&arr[i]);
	}
	
	sort(arr,arr+a);
	scanf("%d",&b);
	
	for(int i=0;i<b;i++) {
		
		scanf("%d",&j);
		int left=0,right=a-1;
		
		while(1) {
			
			if(arr[left]==j || arr[right]==j) {
				printf("1\n");
				break;
			}
			
			else if(left==right || left==right-1) {
				printf("0\n");
				break;
			}
			
			else {
				
				if(j==arr[(left+right)/2] || j==arr[(left+right)/2+1]) {
					printf("1\n");
					break;
				} 
				
				else if(j>arr[(left+right)/2]) {
					left=(left+right)/2;
					//cout<<"check.left:"<<left<<endl;
				}
				
				else if(j<arr[(left+right)/2]) {
					right=(left+right)/2;
					//cout<<"check.right:"<<right<<endl;
				}
			}
		}
	}
	return 0; 
}
