#include<stdio.h>
#include<stdlib.h>
int main()
{
    int creesArray[4]={12,6,52,3};
    int *pp[4],a;
    //int a;
    for(a=0;a<4;a++)
    {
        pp[a]=&creesArray[a];
    }
    for(a=0;a<4;a++)
    {
        printf("The elements in index[%d] is=%d\n",a,*pp[a]);
    }
    return 0;
}
