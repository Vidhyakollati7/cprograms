#include <stdio.h>
#include <stdlib.h>
void main(){
    int i,n,evensum=0,oddsum=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(i%2==0)
    {
        evensum=evensum+i;
        
    }
    else
    {
        oddsum=oddsum+i;
    }
    }
    {
        printf("The difference is %d",
        abs(evensum-oddsum));
}
}    
