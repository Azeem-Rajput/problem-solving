#include <stdio.h>

int cube(int n) {
    return n * n * n;
}

int main() {
    int num, d1, d2, d3, sum;

    printf("Armstrong numbers between 1 and 500 are:\n");

    for (num = 1; num <= 500; num++) {
        d1 = num / 100;             // Hundreds digit
        d2 = (num / 10) % 10;       // Tens digit
        d3 = num % 10;              // Units digit

        sum = cube(d1) + cube(d2) + cube(d3);

        if (sum == num) {
            printf("%d\n", num);
        }
    }

    return 0;
}
