# include<stdio.h>

int main(){

    char date[] = "";

    printf("enter date in the format DD/MM/YYYY: ");
    scanf("%s", &date);

    printf("Date is %c%c\n", date[0], date[1]);
    printf("Month is %c%c\n", date[3], date[4]);
    printf("Year is %c%c%c%c\n", date[6], date[7], date[8], date[9]);

    return 0;
}