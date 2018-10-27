# include<stdio.h>
int main()
{
    int x,y;
    for (x=1;x<=4;x++)
    {
        for(y=1;y<=5;y++)
        {
            if(x==y)
                continue;
            printf("\n%d\t%d\t\n",x,y);    
        }
    }
    return 0;
}