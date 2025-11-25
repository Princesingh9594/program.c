#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    int day, month, year;

    printf("Enter date in dd/mm/yyyy format: ");
    scanf("%s", date);

    // Extract day, month, year
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    // Array of month abbreviations
    char *months[] = { "", "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                       "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

    if (month < 1 || month > 12) {
        printf("Invalid month!\n");
        return 1;
    }

    printf("Date in dd-Mmm-yyyy format: %02d-%s-%d\n", day, months[month], year);

    return 0;
}

