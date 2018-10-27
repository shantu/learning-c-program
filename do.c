# include<stdio.h>
int main()
{
    int num,x,y,sum=0,i=0;
    printf("Enter the number");
    scanf("%d",&num);
    x=num;
    do
        {
            y=num%10;
            sum=sum+y;
            i=i*10+y;
            num=num/10;
        }
    while(num!=0);
    printf("The sum of digits of the number is=%d\n",sum);
    printf("The reverse of the number is =%d\n",i);
    if(x==i)
        printf("The number is palindrome\n");
    else
        printf("The number is not palindrome\n");
    return 0;
}
