#include<stdio.h>
#include<stdlib.h>
int main()
{   ///What is a pointer=Is a variable whose value is the address of another variable.!!
    int vam=4;
    int *baraka=&vam;
    printf("Hello the value is %d\n",vam);
    printf("Hello the value is %x\n",&vam);
    printf("Hello the value is %x\n",*baraka);///value of the address
    printf("Hello the value is %x\n",baraka);/// address of the value inside the variable/address
}
