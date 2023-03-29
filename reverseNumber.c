#include <stdio.h>
int main(){
    int number;
    int mod;
    printf("Input a number: ");
    scanf("%d",&number);

    while(number>0){
        int mod = number%10;
        printf("%d",mod);
        number/=10;
    }

}








