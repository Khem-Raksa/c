#include <stdio.h>
int main(){

    int x,y;
    printf("Input x=");scanf("%d",&x);
    printf("Input y=");scanf("%d",&y);
    if(x>y){
        printf(" x is greater than y");
    }else{
        printf(" y is greather than x");
    }
    return 0;
}