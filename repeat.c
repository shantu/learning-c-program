#include<stdio.h>
int main()
{
    int data[10]={22,65,1,99,32,17,74,49,33,2};
    int n,loc,max,k;
    n=10;
    k=0;
    loc=0;
    max=data[0];
    while(k<n)
    {
        if (max<data[k])
        {
            loc=k;
            max=data[k];
        }
        k=k+1;
    }
    printf("loc=%d,max=%d\n",loc,max);
    return 0;
}
