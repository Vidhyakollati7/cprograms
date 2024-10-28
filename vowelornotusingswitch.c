#include <stdio.h>
int main()
{
   char c;
    printf("Enter Character");
    scanf("%c",&c);
    switch(c)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':printf("%c is Vowel",c);
        break;
        default:printf("%c is Consonant");
        break;
        }
}
