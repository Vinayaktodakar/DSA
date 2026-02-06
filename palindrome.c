#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, sum = 0, temp;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 1000
    n = rand() % 1000 + 1;
    temp = n; // Store the original value to compare later

    printf("Number = %d\n", n);

    // Logic to reverse the digits of the number
    while (n != 0) {
        int remainder = n % 10;
        sum = (sum * 10) + remainder;
        n /= 10;
    }

    // Compare the original number with the reversed number
    if (temp == sum) {
        printf("Result: %d is a Palindrome\n", temp);
    } else {
        printf("Result: %d is Not a palindrome\n", temp);
    }

    return 0;
}
