#include<stdio.h>
void main()
{
char str[50];
int n,len = 0,count = 0;
clrscr();
printf("enter any string:: ");
scanf("%s",str);
len = strlen(str);
for(i=0;i<len;i++)
{
if(str[n] >= 48 && str[n] <= 57)    
{
count++;
}
printf("%d outoff %d numbers in a string",count,len);
getch();
}
