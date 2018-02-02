#include<stdio.h>
void main()
{
int i,j;
printf("enter two numbers");
scanf("%d%d",&i,&j);
i=i^j;
j=i^j;
i=i^c;
printf("\n the swap number is %d %d",i,j);
}
