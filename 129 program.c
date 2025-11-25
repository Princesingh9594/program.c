#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open numbers.txt\n");
        return 1;
    }

    int num, count = 0;
    long sum = 0;  // Use long in case of large sums

    // Read integers until EOF
    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found in the file.\n");
    } else {
        double average = (double)sum / count;
        printf("Sum: %ld\n", sum);
        printf("Average: %.2lf\n", average);
    }

    return 0;
}

