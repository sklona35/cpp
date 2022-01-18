#include <cstdio>

int N;
//int arr[4] = {2, 3, 5 ,7};

int P_number(int n)
{
	int count=0;

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}
	if (count > 1)
		return 0;
	else
		return 1;
}

void f(int i, int now) {
	if(i==N) {
		printf("%d\n",now);
		return;
	}
	else {
		for(int j=2; j<=9; j++) {
			if(P_number(now*10+j)==1) f(i+1,now*10+j);
		}
	}
	return;
}

int main() {
	
	scanf("%d",&N); 
	
	f(0,0);
	
}
