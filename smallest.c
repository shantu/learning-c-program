#include <stdio.h>
int main()
{
    float n1, n2, n3;
    printf("Enter the first number\n");
    scanf("%f", &n1);
    printf("Enter the second number\n");
    scanf("%f", &n2);
    printf("Enter the third number\n");
    scanf("%f", &n3);
    if (n1 < n2)
    {
        if (n1 < n3)
            printf("The first number is smallest\n");
        else
            printf("The third number is smallest\n");
    }
    else
    {
        if (n2 < n3)
            printf("The second number is smaalest\n");
        else
            printf("The third number is smallest\n");
    }
    return 0;
}