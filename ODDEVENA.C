#include<stdio.h>
int main()
{
int n,i,arr[10];
printf("enter number of elements in a array:");
scanf("%d",&n);
printf("enter %d elements in the array:",n);
for( i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("even numbers in the array are:");
for( i=0;i<n;i++)
{
if(arr[i]%2==0)
printf("%d",arr[i]);
}
printf("odd numbers in the array are:");
for( i=0;i<n;i++)
{
if(arr[i]%2==1)
printf("%d",arr[i]);
}
return 0;
}