#include <stdio.h>
#include <assert.h>

#define N   200000

int buffer[N];
int input[N];
int n;

#define min(x, y) ((x) > (y) ? (y) : (x))

void merge(int ls, int rs, int re) {
        int lp = 0;
        int rp = 0;
        int cnt = 0;
        while (ls + lp < rs && rs + rp < re) {
                if (input[ls + lp] > input[rs + rp]) {
                        buffer[lp + rp] = input[rs + rp];
                        rp++;
                        cnt++;
                } else {
                        buffer[lp + rp] = input[ls + lp];
                        lp++;
                        cnt++;
                }
        }

        while (ls + lp < rs) {
                buffer[lp + rp] = input[ls + lp];
                lp++;
                cnt++;
        }

        while (rs + rp < re) {
                buffer[lp + rp] = input[rs + rp];
                rp++;
                cnt++;
        }

        for (int i = 0;i < lp + rp;i++) {
                input[ls + i] = buffer[i];
                buffer[i] = -1;
        }
}

void merge_sort() {
        for (int L = 0;L <= 19;L++) {
                int cnt = 1 << L;
                if (cnt >= n) {
                        return;
                }
                for (int i = 0;i < n;i += 2*cnt) {
                        merge(i, i + cnt, min(i + 2*cnt, n));
                }
        }
}

int main() {
        scanf("%d", &n);

        for (int i = 0;i < n;i++) scanf("%d", &input[i]);

        merge_sort();

        int cnt = 1;

        for (int i = 1;i < n;i++) {
                cnt += (input[i] != input[i - 1]);
        }

        printf("%d\n", cnt);
}