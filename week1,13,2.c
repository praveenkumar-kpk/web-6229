#include<stdio.h>

int main()
{
   int s,u,a,t;
   printf("enter the values of initial velocity, acceleration,time");
   scanf("%d %d %d",&u, &a, &t);

   printf("s=%d",u*t+ (1/2)*(a*t*t));
   	
  return 0; 	
}
