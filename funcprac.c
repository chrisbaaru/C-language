#include<stdio.h>
#include<stdlib.h>
int mult(int a,int b);
int main()
{
    int a;
    a=mult(5,6);
    printf("value of a is %d",a);
    return 0;

}
int mult(int a, int b)
{
    int c;
   /* printf("Enter values\n");
    scanf("%d%d",&a,&b*/
    c=a*b;
    return c;
}
