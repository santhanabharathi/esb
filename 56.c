#include<stdio.h>
#include<stdio.h>
int main()
{
int n;
char s[100],a_count=0,n_count=0;
gets(s);
for(i=0;s[i]!='\0';i++)
{
if((s[n]>='a' && s[n]<='z') || (s[n]>='A' && s[n]<='Z'))
{
a_count++;
}
if(s[n]>='0' && s[n]<='9')
{
n_count++;
}
}
if((a_count && n_count)>0)
printf("yes");
else
printf("no");
}
