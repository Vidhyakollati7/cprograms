// Largest of three numbers  C program online
#include <stdio.h>
int main()
{
  int a =7, b =3, c =1;
    if (a>b) 
    {
        if(a>c)
        { 
            printf("%d is largest ",a);
        }
    }

     else if(b>c)
     {
         printf("%d is largest ",b);
     }
     else 
     {
         printf("%d is largest ",c);
     }
     return 0;
}
