include<stdio.h>
int main()
{
int a[20],i,g;
printf("enter the 10 numbers");
for(i=0;i<20;i++)
{
scanf("%d",&a[i]);
}
g=a[0];
for(i=1;i<20;i++)
{
if(a[i]>g)
{
g=a[i];
}
}
printf("the largest number is %d",g);
return 0;
}
