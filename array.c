#include <stdio.h>

int main() {
    int values[100]; // Assuming a maximum of 100 values
    int n = 0; // Number of values entered
    int total = 0;
    double average;

    printf("Enter values (enter 0 to stop):\n");

    // Read values until a zero is entered or until the array is full
    while (1) {
        int input;
        printf("Enter a value: ");
        scanf("%d", &input);

        if (input == 0) {
            break; // Exit the loop when zero is entered
        }

        if (n >= 100) {
            printf("Array is full. Exiting.\n");
            break;
        }

        values[n] = input;
        total += input;
        n++;
    }

    if (n == 0) {
        printf("No values entered.\n");
    } else {
        average = (double)total / n;
        printf("Total: %d\n", total);
        printf("Average: %.2lf\n", average);
    }

    return 0;
}
