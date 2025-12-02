#include <stdio.h>

enum Role {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {

    const char *roleNames[] = {
        "",          // dummy index to align enum values (starts at 1)
        "ADMIN",
        "USER",
        "GUEST"
    };

    printf("Role names and their integer values:\n");

    for (int r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", roleNames[r], r);
    }

    return 0;
}

