#include <stdio.h>
const int H_A = 100;

static int H_B = 200;

const char * H_C3 = "200";

int H_add(const int, const int);

int main(void) {
    int a = H_A;
    int b = H_B;
    int sum = H_add(a, b);
    printf("sum:%d\n", sum);
    return 0;
};

int H_add(const int v_a, const int v_b) {
    int c = v_a * 20;
    return c + v_b;
}

