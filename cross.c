#include<stdio.h>
#include<math.h>
int a[100];
void crossout(int,int);
int main()
{
    int k,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    a[0]=1;
    for(k=1;k<=n;k++)
    a[k]=k;
    for(k=2;k<=sqrt(n);k++)
    crossout(n,k);
    for(k=2;k<=n;k++)
    if(a[k]!=1)
    printf("%d",a[k]);
    return 0;
    void crossout(int n,int k);
    {
        int l;
        if(a[k]==1)
        return;
        for(l=2*k;l<=n;l=l+k)
        a[l]=1;
        return;
    }

}