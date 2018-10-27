#include <stdio.h>
int main()
{
    /*variable*/
    float prin;
    float noy;
    float roi;
    float intrst;
    /*initialization*/
    prin=0;
    noy=0;
    roi=0;
    intrst=0;
    /*input */
    printf("enter principal \n");
    scanf("%f",&prin);
    printf("enter rate of income \n");
    scanf("%f",&roi);
    printf("enter the number of year \n");
    scanf("%f",&noy);
    intrst=(prin*noy*roi)/100;
    printf("\ninterest %7.2f ",intrst);
    return 0;
}