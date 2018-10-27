# include<stdio.h>
int main()
{
    int x,y;
    char ch;
    number:
    printf("Enter the number\n ");
    scanf("%d",&x);
    if (x<0)
    {
        printf("%d is a negetive number,please enter a positive number\n",x);
        goto choice;
    }
    else
    {
        y=x*x;
        printf("\nSqure of% is =%d\n",x,y);
    }
    choice:
    printf("\n Do you want to get square of more number?\n");
    scanf("%c",&ch);
    if (ch=='y')
        goto number;
    else
       return 0; 
    return 0;
}       