#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	
	if (n == 2 || n == 3) {
		printf("NO SOLUTION\n");
		return 0;
	}

	int cnt = 2;
	while (cnt <= n) {
		printf("%d ", cnt);
		cnt += 2;
	}
	cnt = 1;
	while (cnt <= n) {
		printf("%d ", cnt);
		cnt += 2;
	}
	printf("\n");
	return 0;
}
