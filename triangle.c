#include <stdio.h>
int main()
{
    /* declare the varibles */
    float area;
    float base;
    float height;
    /* initialization of the varibles */
    area = 0;
    base = 0;
    height = 0;
    /* take input from user */
    printf("Please enter height \n");
    scanf("%f",&height);
    printf("Please enter base \n");
    scanf("%f",&base);
    area = base*height*.5;
    printf("Area of this triangle is %f\n",area);
    return 0;
}