#include <stdio.h>

int main()
{
int a,count=0;
printf("\n enter the num:");
scanf("%d",&a);
 while(a!=0)
  {
       a/=10;
       count++;
    }
printf("\n the no of digits is :%d",count);
 return 0;
}
