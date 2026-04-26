#include <stdio.h>
#include <stdbool.h>
#define ll long long

// mhaer's solution for cses Introductary problem 8 "Two Sets", in the hard way.
// https://cses.fi/problemset/task/1092
// github.com/mahomaker/cses

bool set[1000001]; // set 0 and set 1

int main() {
	ll n;
	scanf("%lld", &n);
	
	ll sum = n*(n+1)/2;

	if (sum % 2 == 1) {
		printf("NO\n");
		return 0;
	}
	printf("YES\n");

	sum /= 2;

	int cnt = 0;
	
	for (ll i = n;i >= 1;i--) {
		if (i <= sum) {
			set[i] = 1;
			sum -= i;
			cnt++;
		}
	}
	printf("%d\n", cnt);
	for (int i = 1;i <= n;i++) {
		if (set[i]) {
			printf("%d ", i);
		}
	}
	printf("\n%lld\n", n - cnt);
	for (int i = 1;i <= n;i++) {
		if (!set[i]) {
			printf("%d ", i);
		}
	}
	printf("\n");
}
