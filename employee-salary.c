#include <stdio.h>
int main(){

    int id;
    char name[20];
    char gender[20];

    int hour;
    int rate;

    printf("Enter your id:"); scanf("%d",&id);
    fflush(stdin);
    printf("Enter your name:"); gets(name);
    printf("Enter your gender:");gets(gender);
    fflush(stdin);
    printf("Input how many hours you work:"); scanf("%d",&hour);
    printf("Input your salary rate:"); scanf("%d",&rate);

    int salary = hour * rate * 30;

    printf("----------|||------------|||---------\n");
    printf("ID\tName\tGender\tHours\tRate\tSalary \n");
    printf("%d\t%s\t%s\t%d\t%d\t%d\n",id,name,gender,hour,rate,salary);

}