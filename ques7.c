# include<stdio.h>

int main(){

    int ascii;

    printf("enter an integer from 32 to 127 ");
    scanf("%d", &ascii);

    printf("ASCII character of %d is %c", ascii, ascii);

    return 0;


}