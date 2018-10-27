#include<stdio.h>
int main()
{
    int data[10]={22,65,1,99,32,17,74,49,33,2};
    int item=17;
    int n,loc,k;
    n=10;
    k=0;
    loc=-1;
    while(loc==-1 && k<n)
    {
        if(item==data[k])
        loc=k;
        k=k+1;
    }
    if (loc==1)
        printf("item is not in the array dada\n");
    else
        printf("%d is the location of item\n",loc);
    return 0;
}