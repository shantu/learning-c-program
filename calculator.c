# include<stdio.h>
int main()
{
    int choice;
    float num1;
    float num2;
    float result;
    printf ("CALCULATOR\n");
    printf ("1 Addition\n");
    printf ("2 Subtraction\n");
    printf ("3 Multiplication\n");
    printf ("4 Division\n");
    printf ("Press another key to exit\n");
    printf("Enter the first number\n");
    scanf("%f",&num1);
    printf("Enter the second number\n");
    scanf("%f",&num2);
    printf("Enter the choice\n");
    scanf("%f",&choice);
    switch(choice)
    {
        case 1:
        result=num1+num2;
        printf("The result is %f\n",result);
        break;
        case 2:
        result=num1-num2;
        printf("The result is %f\n",result);
        break;
        case 3:
        result=num1*num2;
        printf("The result is %f\n",result);
        break;
        case 4:
        result=num1/num2;
        printf("The result is %f\n",result);
        break;
        default:
        printf("no such calculation takes place\n");
    }        
    return 0;
}