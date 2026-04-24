#include <stdio.h>

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

int main() {
        buffer[fread(buffer, 1, sizeof(buffer), stdin)] = 1;
        int n = intput();
        for (int i = 0;i < n;i++) {
                printf("%d ", intput());
        }
        printf("\n");
}