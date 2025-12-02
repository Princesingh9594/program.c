#include <stdio.h>

enum Gender {
    MALE = 1,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    printf("Enter name: ");
    scanf("%s", p.name);

    printf("Select Gender:\n");
    printf("1. MALE\n");
    printf("2. FEMALE\n");
    printf("3. OTHER\n");
    printf("Enter choice: ");
    scanf("%d", (int*)&p.gender);

    printf("\nName: %s\n", p.name);
    printf("Gender: ");

    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;

        case FEMALE:
            printf("Female\n");
            break;

        case OTHER:
            printf("Other\n");
            break;

        default:
            printf("Invalid gender\n");
            break;
    }

    return 0;
}

