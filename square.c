#include <stdio.h>
int main()
{
    /*variables*/
    float area;
    float side;
    /*initialization of variables*/
    area = 0;
    side= 0;
    /*take input from user*/
    printf("Enter the value of side\n");
    scanf("%f",&side);
    area = side*side;
    printf("Area of square %f \n",area);
    return 0;
}