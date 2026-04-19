// https://cses.fi/problemset/task/1083/
// mhaer's solution for cses introductionary problem "Missing Number", in the hard way.

#include <stdio.h>
#define bool     char
#define MAXN     200000

bool arr[MAXN];

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0;i < n-1;i++) {
		int d;
		scanf("%d", &d);
		arr[d - 1] = 1;
	}

	for (int i = 0;i < n;i++) {
		if (arr[i] == 0) {
			printf("%d \n", i + 1);
			return 0;
		}
	}

	return -1;
}
