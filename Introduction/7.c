#include <stdio.h>
#define int long long

signed main() {
        int n;
        scanf("%lld", &n);

        for (int i = 1;i <= n;i++) {
                if (i == 1) {
                        printf("0\n");
                } else if (i == 2) {
                        printf("6\n");
                } else if (i == 3) {
                        printf("28\n");
                } else {
                        int ret = (i - 4) * 2 + 4;
                        ret += (i - 4) * (i - 2) * 4;
                        ret += (i - 2) * 2 * 3 + (i - 2) * 2 * 2;
                        printf("%lld\n", (i*i)*(i *i-1)/2 - ret);
                }
        }
}