#include<stdio.h>
int main()
{
int rev=0,t;
char i;
printf("enter the string:");
scanf("%s",&i);
t=i;
while(t!='\0')
{
rev=rev*10;
rev=rev+t%10;
t=t/10;
}
if(i==rev)
{
printf("it is a palindrome");
}
else
{
printf("it is not a palindrome");
}
