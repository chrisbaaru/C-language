#include<stdio.h>
#include<stdlib.h>
int main()
{
    int vamArray[5]={4,7,9,12,8};
    int *p_Array[5];
    int vam;
    for(vam=0;vam<5;vam++)
    {
        p_Array[vam]=&vamArray[vam];
    }
        for(vam=0;vam<5;vam++)
        {
            printf("The element in index[%d] is=%d\n",vam,*p_Array[vam]);
        }
        return 0;}
