#include<stdio.h>
int main()
{
int num,n[25],i;
printf("enter the number");
printf("Enter the integer");
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<num;i++)
{
printf("the index is%d\t%d\n",n[i],i);
}
return 0;
}
