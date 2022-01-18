#include <cstdio>

int main() {

	long long int a,b,z;

	scanf("%lld %lld",&a,&b);

	z=(b*100)/a;

	if(z>=99) {
		printf("-1");
		return 0;
	}

	long long int left = 0, right = 1000000000;

	long long int result = -1;

	while(left<=right) {

		int mid = (left+right)/2;

		int tempz = ((b+mid)*100)/(a+mid);

		if(z>=tempz) {

			result = mid + 1;
			left = mid + 1;

		}

		else {

			right = mid - 1;

		}

	}

	printf("%lld",result);

}