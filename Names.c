#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char a[14]="Crees";
    char b[14]="Baaru";
    printf("%s\n",a);
    printf("%s\n",b);
    strcat(a,b);
    printf("%s\n",a,b);
    return 0;
}
