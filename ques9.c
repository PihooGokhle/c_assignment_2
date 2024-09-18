#include <stdio.h>

int main() {

    int dd, mm, year;

    printf("Enter date (day): ");
    scanf("%d", &dd);

    printf("Enter month: ");
    scanf("%d", &mm);

    printf("Enter year: ");
    scanf("%d", &year);

    printf("Date is %d/%d/%d ", dd, mm, year);

    return 0;
}