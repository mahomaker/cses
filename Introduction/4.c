#include <stdio.h>
#define int long long
#pragma GCC optimize("O2")
// https://cses.fi/problemset/hack/1094/entry/16967226/
// mhaer's solution for cses Introdcutionary problem 4 "Increasing Array", in the hard way.
 
static char buf[1 << 22];
int bp = 0;
int intput() {
	int result = 0;
	int c;
	while ((c = buf[bp++]) != EOF && c != ' ' && c != '\n') {
		result = result * 10 + (c - '0');
	}
	return result;
}
 
signed main() {
	fread(buf, 1, sizeof(buf), stdin);
	int n;
	n = intput();
	int d;
	int max_ = 0;
	int sum = 0;
	for (int i = 0;i < n;i++) {
		d = intput();
		int diff = max_ - d;         
		int mask = diff >> 63;        
		sum += diff & ~mask;          
		max_ += (-diff) & mask;       			
	}
	printf("%lld\n", sum);
}
