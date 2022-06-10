#include<stdio.h>
#include<stdlib.h>
int add(int dc,int sum)
{
      //dc=2;
     //sum=0;
    int *pp;
    for(dc=2;dc<16;dc+=2)
 {
      pp=&dc;
    // printf("The even numbers between 1 and 16=%d\n",dc,*pp);

 }
    for(dc=2;dc<16;dc+=2)
        {
      sum+=*pp;
        }
return sum;
}
int main()
{
int c=add(2,0);
printf("The Sum of the even numbers between 1 and 16 is=%d",c);
return 0;

}

