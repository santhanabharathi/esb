#include<stdio.h>
void main() {
    char n[15];
    scanf("%s",n);
    int i,count=0;
    for(i=0;i<15;i++)
    {if(n[i]=='a'||n[i]=='e'||n[i]=='i'||a[i]=='o'||n[i]=='u'||n[i]=='A'||n[i]=='E'||n[i]=='I'||n[i]=='O'||n[i]=='U')
    {
    count++;
     }
    }
     if(count!=0)
     printf("Yes");
     else
     printf("No");
}
