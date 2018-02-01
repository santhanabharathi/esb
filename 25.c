include<stdio.h>
int main()
{
int i,j,n[100],size,t;
printf("Enter the size of array:");
scanf("%d",&size);
printf("Enter the array elements:");
for(i=0;i<size;i++)
{
scanf("%d",&n[i]);
}
for(i=0;i<size;i++)
{
for(j=i+1;j<size;j++)
{
if(n[i]>n[j])
{
t=n[i];
n[i]=n[j];
n[j]=t;
}}}
printf(" The median element is %d",n[size/2]);
return 0;
}

