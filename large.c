#include<stdio.h>
int data[10]={22,65,1,99,32,17,74,49,33,2};
int n,loc1,loc2,first,second;
int main()
{
    void find {int [],int,int,int};
    n=10;
    loc1=-1;
    loc2=-1;
    find (data,n,loc1,loc2);
    printf("first=%d,loc1=%d,second=%d,loc2=%d",first,loc1,second,loc2);
    return 0;
}
void find(int list [] int len,int l1,int l20)
{
    int temp,k;
    second=list[1];
    l1=0;
    l2=1;
    if(first <second)
    {
        temp=first;
        first=second;
        second=temp;
        l2=0;
        l1=1;
    }
    for(k=2;k<len;k++)
    {
        if(first<list[k])
        {
            second=first;
            first=list[k];
            l2=l1;
            l1=k;
        }
        else if(second<list[k])
        {
           second=list[k];
           l2=k; 
        }
    }
    loc1=l1;
    loc2=l2;
}