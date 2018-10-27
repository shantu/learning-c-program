#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
float x,x1,x2;
printf("Enter the values of a,band c\n");
scanf("%d %d %d", &a, &b ,&c);
d=b*b-4*a*c;
if(d>0)
    {
       x1=((-1)*b+sqrt(d))/2*a;
       x2=((-1)*b-sqrt(d))/2*a;
       printf("x1=%.2f,x2=%.2f",x1,x2);
    }
    else if(d==0)
    {
        x=(-1)*b/2*a;
        printf("UNIQUE SOLUTION x=%.2f",x1,x2);
    }
    else
    printf("NO REAL SOLUTIONS");
    return 0;
}    