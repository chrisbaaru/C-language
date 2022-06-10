#include<stdio.h>
#include<stdlib.h>
/*int myArr(int meArray[],int size)
{
    int sum=0,j;
    for(j=0;j<size;j++)
    {
        sum=sum+meArray[j];
    }
    return sum;
}*/
int main()
{
    int meArray[5]={25,26,85,32,12};
    meArray[1]=32;
    int *p_array[5];
    int a;
    for(a=0;a<5;a++)
    {
        p_array[a]=&meArray[a];//assigns the addresses of the arrays to the pointers, therefore it get the values of the arrays using
        //the address that have being assigned,
    }
    for(a=0;a<5;a++)
    {
        printf("Value of array[%d]=%d\n",a,*p_array[a]);
    }
   /* int b=myArr(meArray,5);
    printf("Sum of arrays =%d",b);*/
    return 0;
}
