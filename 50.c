#include <stdio.h>
int main(void) {
int a,flag=0;
scanf("%d",&n);
while(a!=1)
{
if(n%2!=0)
flag=1;
a=a/2;
}
if(flag==0)
{
printf("yes");
}
else
{
printf("no");
}
}
