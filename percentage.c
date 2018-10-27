#include <stdio.h>
int main()
{
    float per;
    printf("Enter the percentage\n");
    scanf("%f", &per);
    if (per < 33)
        printf("The student is fail\n");
    else
        printf("the student is pass\n");
    return 0;
}
