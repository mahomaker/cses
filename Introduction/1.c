#include <stdio.h>
#define int long long
// https://cses.fi/problemset/task/1068/
// mhaer's solution for cses introductionary problem "Weird Algorithm", in the hard way.

int main() {
	int number;
	scanf("%lld", &number);
	printf("%lld ", number);
 
	while (number != 1) {
		if (number % 2 == 1) {
			number = 3*number + 1;
		} else {
			number /= 2;
		}
		printf("%lld ", number);
	}
	printf("\n");
}
