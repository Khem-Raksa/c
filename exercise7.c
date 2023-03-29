#include <stdio.h>
int main(){
    
    printf("Plug in x to calculate the equation: x + 2x + 3x - 4x -5x\n");
    int x;
    scanf("%d",&x);

    printf("x + 2x + 3x - 4x -5x with x = %d is %d\n", x, -3*x);

}