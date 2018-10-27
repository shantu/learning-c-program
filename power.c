#include<stdio.h>
int main()
{
    int x,y,i=1;
    int power=1;
    printf("The first number:");
    scanf("%d",&x);
    printf("The second number:");
    scanf("%d",&y);
    while(i<=y)
    {
        power =power*x;
        i++;
    }
    printf("%d the power %d is %d\n",x,y,power);
    return 0;
}