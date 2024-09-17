# include<stdio.h>

int main(){

    float p,r,t;

    printf("enter principle amount");
    scanf("%f",&p);

    printf("enter rate");
    scanf("%f",&r);

    printf("enter time");
    scanf("%f",&t);

    float multiplication = p * r * t;
    float SI = multiplication/100;

    printf("SI is %.2f", SI);

    return 0;


}