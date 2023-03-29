#include <stdio.h>
int main(){

    printf("Add from 2 + 4 + 6 + ..... N\n");
    printf("Please input a number:");

    int n;
    int sum = 0;
    scanf("%d",&n);

    for (int i = 1; i<=n;i++){
        sum+=i*2;
    }

    printf("The total sum is %d", sum);

}