#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    // count digits
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;

    // compute Armstrong sum
    while (temp > 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (sum == n)
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;