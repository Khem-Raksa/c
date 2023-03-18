#include <stdio.h>
int main() {
	
	//reverse a number
	char uname[20], pass[20], cpass[20];
	printf("Input User Name =");scanf("%s",&uname);
	printf("Input Password =");scanf("%s",&pass);
	printf("Input Confirm Password =");scanf("%s",&cpass);
	
	if(strcmp(uname,"sa") == 0){
		if(strcmp(pass,"123")==0){
			if(strcmp(cpass,"123")==0){
				printf("Welcome to login. . .!");
			} else{
				printf("Invalid Password . . . !");
			}
		}
		
		else{
			printf("Invalid Password . . . !");
		}
	}
	
	else
		printf("Invalid User Name");
	
	
	return 0;
}
