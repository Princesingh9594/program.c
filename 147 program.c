#include <stdio.h>
#include <stdlib.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Define Employee structure
struct Employee {
    char name[50];
    int emp_id;
    float salary;
    struct Date joining_date;
};

int main() {
    struct Employee emp;
    FILE *fp;

    // Input employee data
    printf("Enter employee name: ");
    scanf("%s", emp.name);

    printf("Enter employee ID: ");
    scanf("%d", &emp.emp_id);

    printf("Enter salary: ");
    scanf("%f", &emp.salary);

    printf("Enter joining date (day month year): ");
    scanf("%d %d %d", &emp.joining_date.day, &emp.joining_date.month, &emp.joining_date.year);

    // Write employee data to binary file
    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    printf("\nEmployee data written to file successfully.\n");

    // Read employee data from binary file
    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }
    struct Employee read_emp;
    fread(&read_emp, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Display read data
    printf("\nEmployee Details Read from File:\n");
    printf("Name: %s\n", read_emp.name);
    printf("Employee ID: %d\n", read_emp.emp_id);
    printf("Salary: %.2f\n", read_emp.salary);
    printf("Joining Date: %02d-%02d-%04d\n", 
           read_emp.joining_date.day, read_emp.joining_date.month, read_emp.joining_date.year);

    return 0;
}

