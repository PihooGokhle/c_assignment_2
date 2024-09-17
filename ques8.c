# include<stdio.h>

int main(){

    char ch1, ch2, ch3;

    printf(" enter first character\n ");
    scanf( "%c", &ch1);

     while(getchar() != '\n');

    printf(" enter second character\n ");
    scanf( "%c", &ch2);

     while(getchar() != '\n');

    printf(" enter third character\n ");
    scanf( "%c", &ch3);

    printf( "ASCII of %C is %d\n", ch1, ch1);
    printf( "ASCII of %C is %d\n", ch2, ch2);
    printf( "ASCII of %C is %d\n", ch3, ch3);

    return 0;
}