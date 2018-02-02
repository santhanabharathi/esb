#include <stdio.h>
#include <string.h>
int main()
{
char n[100];
int l,i,b=0;
gets(n);
l=strlen(n);
for(i=0;i<l;i++)
{if(n[i]==' ')
{b++;}
}
printf("%d",b);
return 0;
}
