# include<stdio.h>

int main(){

    int a,b,c;

    printf("enter a\n");
    scanf("%d",&a);

    printf("enter b\n");
    scanf("%d",&b);

    printf("enter c\n");
    scanf("%d",&c);

    int sum = a + b + c;
    int avg = sum/3;

    printf("average of three numbers is %d", avg);

    return 0;
}