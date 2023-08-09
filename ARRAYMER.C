#include<stdio.h>
#include<conio.h>
int main()
{
int arr1[5],arr2[5],size1,size2,i,j,merge[10];
printf("enter arr1 size");
scanf("%d",&size1);
printf("enter arr1 elements:");
for(i=0;i<size1;i++)
{
scanf("%d",&arr1[i]);
merge[i]=arr1[i];
}
j=i;
printf("enter arr2 size");
scanf("%d",&size2);
printf("enter arr2 elements:");
for(i=0;i<size2;i++)
{
scanf("%d",&arr2[i]);
merge[j]=arr2[i];
j++;
}
printf("the new array elements of merging is:\n");
for(i=0;i<j;i++)
printf("%d",merge[i]);
getch();
return 0;
}