#include <stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the a,b values and operator");
    scanf("%d%d %c",&a,&b,&op);
    switch(op)
    {
        case'+':printf("The addition is %d",a+b);
        break;
        case'-':printf("The Subtraction is %d",a-b);
        break;
        case'*':printf("The Multipilcation is %d",a*b);
        break;
        case'%':printf("The Reminder is %d",a%b);
        break;
        case'/':printf("The  Division is %d",a/b);
        break;
        default:printf("Invalid output");
        break;
        }
}
