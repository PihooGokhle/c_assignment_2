# include<stdio.h>

int main(){

    int cp,sp;

    printf(" enter cost price\n ");
    scanf("%d",&cp);
    cp = cp/12 * 25;

    printf(" enter selling price\n ");
    scanf("%d",&sp);
    sp = sp/12 * 25;

    if(sp > cp){
        printf("profit\n");
    }
    else if(sp == cp){
        printf("neither profit nor loss\n");
    }
    else{
        printf("loss\n");
    }

    return 0;
}