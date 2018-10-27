#include<stdio.h>
int main()
{
    int a,b,c;
    float MEAN(int,int,int);
    printf("Entar the value of a,b,and c");
    scanf("%d%d%d",&a,&b,&c);
    printf("The average of %d ,%d and %d is:%.2f\n",a,b,c,MEAN(a,b,c));
    return 0;
}
float MEAN(int t1,int t2,int t3)
{
    float ave;
    ave=(t1+t2+t3)/3;
    return(ave);
}