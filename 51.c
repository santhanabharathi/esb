#include <stdio.h>
int main(void) 
{
int x,rem,rev,dig;
scanf("%d",&x);
while(x!=0)
{ 
rem=x%10;
rev=rev*10+rem;
x=x/10;
}
while(rev!=0)
{
dig=rev%10;
rev=rev/10;
printf("%d ",dig);
}
}
