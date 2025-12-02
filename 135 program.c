#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE = 11,
    TIMEOUT = 12
};

int main() {
    enum Status result;

    for (result = SUCCESS; result <= TIMEOUT; result++) {
        switch (result) {
            case SUCCESS:
                printf("SUCCESS = %d\n", result);
                break;

            case FAILURE:
                printf("FAILURE = %d\n", result);
                break;

            case TIMEOUT:
                printf("TIMEOUT = %d\n", result);
                break;
        }
    }

    return 0;
}

