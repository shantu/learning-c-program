    #include<stdio.h>
    int main()
    {
        /*variable*/
        float centi;
        float fahren;
        /*intialisation*/
        centi=0;
        fahren=0;
        /*take input from user*/
        printf("enter fahrenheit temperature \n");
        scanf("%f",&fahren);
        centi = 5.0/9.0*(fahren-32);
        printf("The centigrade temperature is %6.2f\n",centi);
        return 0;
    }
        