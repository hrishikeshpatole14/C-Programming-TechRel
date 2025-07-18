
#include <stdio.h>

int main() {
    int year;

    // Accept a year from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check leap year condition
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
