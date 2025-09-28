#include <stdio.h>

int main() {
    int units;
    float bill = 0;

    // Input: total units consumed
    printf("Enter total units consumed: ");
    scanf("%d", &units);

   
    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) + (units - 100) * 7;
    }
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
    }

  
    printf("Total Electricity Bill = ₹%.2f\n", bill);

    return 0;
}
