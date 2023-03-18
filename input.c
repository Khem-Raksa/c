#include <stdio.h>

int main (){
	
	int id;
	char name[20] ;
	char gender[20];
	float score1, score2, score3;
	
	
	printf("Enter your id : ");
	scanf("%d",&id);
	
	printf("Enter your name : ");
	fflush(stdin);
	gets(name);
	
	printf("Enter your gender : ");
	fflush(stdin);
	gets(gender);
	
	printf("Enter your score1 : ");
	scanf("%f",&score1);
	
	printf("Enter your score2 : ");
	scanf("%f",&score2);
	
	printf("Enter your score3 : ");
	scanf("%f",&score3);
	
	float total = score1 + score2 + score3;
	
	printf("======= Output ========\n");
	printf("ID = %d\n", id);
	printf("Name = %s\n", name);
	printf("Gender = %s\n", gender);
	printf("Score1 = %f\n", score1);
	printf("Score2 = %f\n", score2);
	printf("Score3 = %f\n", score3);
	printf("Total = %f\n", total);
	printf("Average = %f\n", total/3);
}
