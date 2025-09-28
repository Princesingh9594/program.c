#include <stdio.h>

int main() {
    int lateDays;
    int fine = 0;

    // Input number of late days
    printf("Enter the number of days the book is late: ");
    scanf("%d", &lateDays);

    
    if (lateDays <= 0) {
        printf("No fine. Book returned on time.\n");
    }
    else if (lateDays <= 5) {
        fine = lateDays * 2;
        printf("Fine = ₹%d\n", fine);
    }
    else if (lateDays <= 10) {
        fine = (5 * 2) + ((lateDays - 5) * 4);
        printf("Fine = ₹%d\n", fine);
    }
    else if (lateDays <= 30) {
        fine = (5 * 2) + (5 * 4) + ((lateDays - 10) * 6);
        printf("Fine = ₹%d\n", fine);
    }
    else {
        printf("Membership Cancelled due to late return over 30 days.\n");
    }

    return 0;
}
