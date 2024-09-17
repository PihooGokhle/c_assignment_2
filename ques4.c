# include<stdio.h>

int main(){

    int l,w,h;

    printf(" enter length ");
    scanf("%d",&l);

    printf(" enter width ");
    scanf("%d",&w);

    printf(" enter height ");
    scanf("%d",&h);

    int volume = l * w * h;

    printf("volume of cuboid is %d", volume);

    return 0;
}