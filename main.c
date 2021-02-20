#include <stdio.h>


int main()
{
    float sp,cp,profit,loss;

    printf("enter the value of selling price:\n");
    scanf("%f",&sp);
    printf("enter the value of cost price:\n");
    scanf("%f",&cp);
    if(sp>cp)
    {
       profit=sp-cp;
       printf("profit=%f",profit);
    }
     if(cp>sp)
    {
       loss=cp-sp;
       printf("loss=%f",loss);
    }
    return 0;
}
