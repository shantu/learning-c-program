# include<stdio.h>
int main()
{
    int i,j;
    for (i=1;i<=5;i++)
    {
        for(j=1;j<=7;j++)
        {
            if (j==7)
                break;
            else
                printf("%d%d\n",i,j);
        }
    }
    return 0;
}