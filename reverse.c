#include<stdio.h>
int main()
{
    /*variable*/
    int a,b,c,d,e,no;
    int b;
    int c;
    int d;
    int e;
    /*initialisation*/
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    /*input*/
    printf("\n enter number to reverse \n");
    scanf("%d",&no);
    a=no%10;
    b=(no/10)%10;
    c=(no/100)%10;
    d=(no/1000)%10;
    e=no/10000;
    printf("\n reversed number ");
    printf("%d%d%d%d%d",a,b,c,d,e);
    return 0;
}