#include <stdio.h>

int main() {
    int N;

    // Ask user for the value of N
    printf("Enter a number N: ");
    scanf("%d", &N);

    // Loop from 1 to N and check even/odd using if-else
    int i;
    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            printf("%d is Even\n", i);
        } else {
            printf("%d is Odd\n", i);
        }
    }

    return 0;
}

