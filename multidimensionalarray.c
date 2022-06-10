#include<stdio.h>
#include<stdlib.h>
int main()
{
    int multArray [2] [3]={
    {1,6,3},///row 0;(using indexing)
    {5,8,7}///row 1;(using indexing)
    };
    int a,b;
    for(a=0;a<2;a++){
        for(b=0;b<3;b++)
        {
            printf("value in row index [%d] and value in column index [%d]=%d\n",a,b,multArray[a][b]);
        }
    }
    return 0;
}
