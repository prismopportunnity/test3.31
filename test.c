#include <stdio.h>
//公约数和公倍数
int get_LCM(int a, int b);

int main() {
    int a;
    int b;

    while ((scanf("%d%d", &a, &b)) != EOF) {
        printf("%d\n", get_LCM(a, b));
    }

    return 0;
}

int get_LCM(int a, int b) {
    int temp;
    int remainder;
    int A;
    int B;

    A = a;
    B = b;

    if (a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    while (a % b) {
        remainder = a % b;
        a = b;
        b = remainder;
    }

    return A * B / b;
}