#include <math.h>
#include <stdio.h>
    int main()
    { 
        int a,b,c,d;
        float r1,r2;
        printf("Enter a,b,c,");
        scanf("%d%d%d",&a,&b,&c);
        d=(b*b)-(4*a*c);
        if(d>0)
        {
            r1=-b+sqrt(d)/2*a;
            r2=-b-sqrt(d)/2*a;
            printf("roots are real=%f%f",r1,r2);
  }
 else if(d<0)   
 {
      printf("Roots are imaginary");
 }
 else {
     r1=r2=-b/2*0;
     printf("Roots are  equal =%f%f",r1,r2);
 }
 return 0;
 }
