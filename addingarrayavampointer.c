#include<stdio.h>
int vamcrees(int VamArray[],int size)
{
    int sum;
    sum=0;
    int x;
    for(x=0;x<size;x++)
    {
        sum=sum+VamArray[x];
    }
    return sum;
}
int main()
{
    int VamArray[6]={7,9,23,5,8,10};
    int *yorghurt[6];
    int fast;
    for  (fast=0;fast<6;fast++)
    {
        yorghurt[fast]=&VamArray[fast];
    }
        for (fast=0;fast<6;fast++)
        {
            printf("the answer is fast[%d]=%d\n",fast,*yorghurt[fast]);
        }
    int a=vamcrees(VamArray,6);
    printf("Sum of numbers is %d",a);

}
