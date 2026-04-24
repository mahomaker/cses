#include <stdio.h>

#define int long long
const int set[2] = {0, ~0};

char buffer[1 << 22];
int inp_ptr = 0;
int intput() {
        int ret = 0;
        char c;
        while ((c = buffer[inp_ptr++]) && c != ' ' && c != '\n') {
                ret = (ret * 10) + c - '0';
        }
        return ret;
}


signed main() {
        buffer[fread(buffer, 1, sizeof(buffer), stdin)] = 1;
        int t = intput();
        while (t--) {
                int y = intput(), x = intput();
                int n = x > y ? x : y;
                int m = n % 2 == 1;
                printf("%lld\n", n*n - n + 1 + (2*m-1) * ((set[y != n] & ((n - y))) + (set[x != n] & (- n + x))));
        }
}