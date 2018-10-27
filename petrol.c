#include<stdio.h>
int main()
{
    /*declare the price*/
    float totcost;
    float costperlitre;
    float totkm;
    float kmperlitre;
    /*initiate of variable*/
    totcost=0;
    costperlitre=0;
    totkm=0;
    kmperlitre=0;
    /*inut the variable*/
    printf ("Plese enter the cost per litre\n");
    scanf("%f",&costperlitre);
    printf(" enter km per litre\n");
    scanf("%f",&kmperlitre);
    print("Please the enter the total km\n");
    scanf("%f",&totkm);
    totcost=totkm/kmperlitre*costperlitre;
    printf("Total cost %8.2f\n",totcost);
    return 0;
}
