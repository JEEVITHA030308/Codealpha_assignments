#include<stdio.h>
#include<conio.h>
int main()
{
    int choice;
    float a,b,result;
    printf("calculator operations\n");
    printf("1.Addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.Division\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("enter two numbers\n");
        scanf("%f%f",&a,&b);
        result=a+b;
        printf("Result=%.2f",result);
        break;
        case 2:
        printf("enter two numbers\n");
        scanf("%f%f",&a,&b);
        result=a-b;
        printf("Result=%.2f",result);
        break;
        case 3:
        printf("enter two numbers\n");
        scanf("%f%f",&a,&b);
        result=a*b;
        printf("Result=%.2f",result);
        break;
        case 4:
        printf("enter two numbers\n");
        scanf("%f%f",&a,&b);
        if(b!=0){
            result=a/b;
            printf("Result=%.2f",result);
        }
        else{
            printf("division by zero is not allowed\n");
        }
        break;
        default:
        printf("invalid");
    }
    return 0;
}
