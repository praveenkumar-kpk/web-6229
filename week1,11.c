#include<stdio.h>

int main()
{
   int p,t,r;
   printf("enter the values of principal amount,time and rate of interest");
   scanf("%d %d %d",&p,&t,&r);
   printf("simple interest is %d\n",(p*t*r)/100);
   printf("compound interest is %d\n",p*(1+r/100)^t);
   return 0;
}
