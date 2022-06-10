#include<stdio.h>
#include<stdlib.h>
int main()
{ //What is a pointer
    /// A pointer is a variable whose value is the address of another variable.
    int crees=3;
    int *pp=&crees;
    //pp=&crees;
    printf("Value of crees is=%d\n",crees);
    printf("Value of crees using pointer is=%d\n",*pp);///(by using the * before the varible, it returns the value of the given address)
    printf("Address of crees using the address sign & is=%x\n",&crees);///address is always in hexadecimal
    printf("Address of crees using pointer pp is=%x",pp);
    //therefore using the form of address, i.e &crees and using pointers, is one and the same thing!!
    return 0;

}
