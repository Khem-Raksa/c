#include <stdio.h>
int main(){

    char uname[20], pass[20], cpass[20];
    printf("Input Username :"); gets(uname);
    printf("Input password :"); gets(pass);
    printf("Confirm password :"); gets(cpass);

    if(strcmp(uname,"Raksa")==0){
        if(strcmp(pass,"123")==0){
            if(strcmp(cpass,"123")==0){
                printf("Logged In Successfully");
            }else{
                printf("Wrong password confirmation");
            }
        } else {
            printf("Wrong Password");
        }
        
    }else{
        printf("Wrong Username");
    }
    return 0;
}