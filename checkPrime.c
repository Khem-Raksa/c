#include <stdio.h>
int main(){
    fflush(stdin);
    int num;
    printf("Please input a number:\n");
    scanf("%d",&num);
    int i =1;
    int counter = 0;
    for (i=1;i<=num;i++){
        if(num%i==0){
            counter++;
        }
    }

    if(counter>2){
        printf("Number %d is not a prime", num);
    }else{
        printf("Number %d is a prime", num);
    }

}
