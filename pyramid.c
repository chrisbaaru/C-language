#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=i;j>=1;j--)
        {
           printf("A",j);
            }
        printf("\n");
    }
    return 0;
}
