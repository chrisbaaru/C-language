#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x<0)
        {printf("%d is negative");}

      else if(x>0){printf("%d is positive");}

        else {printf("%d is zero");}
        return 0;
}
