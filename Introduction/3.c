// mhaer's solution for cses introductionary problem 3 "Repetitions", in the hard way.
// https://cses.fi/problemset/task/1069/

#include <stdio.h>
#include <stdlib.h>
#pragma GCC optimize("O2")

int max(int lhs, int rhs) {return lhs < rhs ? rhs : lhs;}

int main() {
	int cnt = 0, max_ = 0;
	char cur = '$';
	char c;
	while ((c = getchar_unlocked()) != EOF && c != '\n' && c != ' ') {
		if (cur == c) {
			cnt++;			
		} else {
			cnt = 1;
			cur = c;
		}
		max_ = max(max_, cnt);
	}
	printf("%d\n", max_);
}
