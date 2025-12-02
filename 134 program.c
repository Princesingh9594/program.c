#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status result = SUCCESS;   // Change this to test other values

    switch (result) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Unknown status.\n");
    }

    return 0;
}

