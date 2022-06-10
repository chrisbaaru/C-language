#include<stdio.h>
#include<stdlib.h>
int ARRAY(int myArray[],int size)
{
    int sum=0;
    int a;
    for(a=0;a<size;a++)
    {
        sum=sum+myArray[a];/// is same as saying sum+=myArray[a]
    }
    return sum;
}
int main()
{
    int myArray[6]={16,35,45,10,12,18};
    int b=ARRAY(myArray,6);
    printf("Sum of Arrays=%d",b);
    return 0;
}
