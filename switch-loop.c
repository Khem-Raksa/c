#include<stdio.h>
#include<math.h>

int main(){
    int op;
    int n,i;
    int sum=0;
    printf("1. Loop One\n");
    printf("2. Loop Two\n");
    printf("3. Loop Three\n");
    printf("4. Loop Four\n");
    printf("4. Loop Five\n");
    printf("Please choose one :");
    scanf("%d",&op);
    printf("Input n =");
    scanf("%d",&n);

    switch(op){
        case 1:{
            sum = 0;
            for(i=1;i<n;i++){
                sum = sum + i;
            }
            printf("Sum Loop1= %d\n",sum);
        }break;
        
        case 2:{
            sum = 0;
            for(i=1;i<n;i++){
                sum = sum + sqrt(i);
            }
            printf("Sum Loop2= %d\n",sum);
        }break;

        case 3:{
            sum = 0;
            for (i=1;i<n;i++){
                sum = sum + pow(i,2);
            }
             printf("Sum Loop3= %d\n",sum);
        }break;

        case 4:{
            sum = 0;
            for (i=1;i<n;i++){
                sum = sum + pow(i,3);
            }
            printf("Sum Loop4= %d\n",sum);
        }break;

        case 5:{
            sum = 0;
            for (i=1;i<n;i++){
                sum = sum + pow(i,4);
            }
            printf("Sum Loop4= %d\n",sum);
        }break;
    }

}

