# include<stdio.h>
int main()
{
    int choice;
    int num1;
    int num2;
    int result;
    printf ("CALCULATOR\n 1 for Addition\n 2 for Subtraction\n 3 for Multiplication \n 4 for Division\n,Press another key to exit\n");
    printf("Enter the first number\n");
    scanf("%d",&num1);
    printf("Enter the second number\n");
    scanf("%d",&num2);
    printf("Enter the choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        result= sum(num1,num2);
        printf("The result is %d\n",result);
        break;
        case 2:
        result= substraction(num1,num2);
        printf("The result is %d\n",result);
        break;
        case 3:
        result= prod(num1,num2);
        printf("The result is %d\n",result);
        break;
        case 4:
        result= div(num1,num2);
        printf("The result is %d\n",result);
        break;
        default:
        printf("no such calculation takes place\n");
    }        
    return 0;
}
int add(int x,int y)
{
    int add;
    add=x+y;
    return (add);
}
int minus(int x,int y)
{
    int minus;
    minus=x-y;
    return (minus);
}
int multi(int x,int y)
{
    int multi;
    multi=x*y;
    return (multi);
}
int div(int x,int y)
{
    int div;
    div=x/y;
    return (div);
}
