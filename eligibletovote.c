#include <stdio.h>

int main()
{

    int age;

    printf("Enter age : ");
    scanf("%d", &age);

    if (age >= 18)
        printf("You are eligible for Vote!");
    else
        printf("You are not eligible to Vote!");

    return 0;
}
