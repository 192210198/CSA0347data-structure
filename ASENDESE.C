#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
int a[100],n,i,j;
printf("array size:");
scanf("%d",&n);
printf("elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for( i=0;i<n;i++)
{
for( j=0;j<n;j++)
{
if(a[j]>a[i])
{
int temp=a[i];
a[j]=temp;
}
}
}
printf("\nascending:");
for( i=0;i<n;i++)
{
printf("%d",a[i]);
}
for( i=0;i<n;i++)
{
for( j=0;j<n;j++)
{
if(a[j]<a[i])
{
int temp =a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("\ndescending:");
for( i=0;i<n;i++)
{
printf("%d",a[i]);
}
getch();
return 0;
}