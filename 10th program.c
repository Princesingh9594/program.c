#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Ask the user to input the time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate the hours, minutes, and seconds
    hours = totalSeconds / 3600; // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60; // 1 minute = 60 seconds
    seconds = totalSeconds % 60; // Remaining seconds

    // Display the time in hours:minutes:seconds format
    printf("Time is: %d hours, %d minutes, and %d seconds.\n", hours, minutes, seconds);

    return 0;
}
