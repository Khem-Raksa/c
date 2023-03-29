#include <stdio.h>

int main() {
    int seconds;
    printf("Please input how many seconds : ");
    scanf("%d",&seconds);

    int hour = seconds / 3600;
    printf("Hours = %d\n",hour);

    int minutes = seconds / 60;
    printf("Minutes = %d\n",minutes);

    
    int leftSeconds = seconds - hour*3600;
    printf("Number of seconds left = %d\n",leftSeconds);

}

