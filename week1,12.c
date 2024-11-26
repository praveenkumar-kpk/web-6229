#include<stdio.h>

int main()
{
   int a,b;
   printf("enter the number of days");
   scanf("%d", &a);
   b=a%365;
   printf("%d years, %d days",a/365,b);
   return 0;
}
