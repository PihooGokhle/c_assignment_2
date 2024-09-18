# include<stdio.h>

int main(){

    char time[] = "";

    printf("enter time in the format HH:MM: ");
    scanf("%s", &time);

    printf("Hour is %c%c\n", time[0], time[1]);
    printf("Minute is %c%c\n", time[3], time[4]);

    return 0;
}
