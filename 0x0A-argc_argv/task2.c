#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int sum = 0;

    if (argc == 1) {
        printf("0\n");
        return 0; // No numbers provided, return 0
    }

    for (int i = 1; i < argc; i++) {
        char *arg = argv[i];
        int num = 0;
        int j = 0;

        // Convert the argument to an integer
        while (arg[j] != '\0') {
            if (arg[j] < '0') {
                printf("Error\n");
                return 1; // Non-numeric character found, return an error
            }
            num = num * 10 + (arg[j] - '0');
            j++;
        }

        // Check if the number is positive
        if (num < 0) {
            printf("Error\n");
            return 1; // Negative number found, return an error
        }

        sum += num;
    }

    printf("%d\n", sum);
    return 0; // Success
}

