//percentage of student for five subjects max marks in subject is 100 
#include<stdio.h>

int main()
{
  int m1,m2,m3,m4,m5;
   printf("enter marks of 5 subjects");
   scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
   printf("total is %d\n percentage of marks is %f %%",m1+m2+m3+m4+m5,float(m1+m2+m3+m4+m5)/5);
   return 0;
}
