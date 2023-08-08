#include<stdio.h>
#include<conio.h>
int main()
{
int a[2][2],b[2][2]sum[2][2],i,j;
printf("enter  a matrix");
for(i=0;i<=2;i++)
  for(j=0;j<=2;j++)
  scanf("%d",a[i][j]);

  printf("enter  b matrix");
for(i=0;i<=2;i++)
  for(j=0;j<=2;j++)
  scanf("%d"b[i][j]);
printf("adiition of a two matrix");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
sum[i][j]=a[i][j]+[i][j];
printf("print the result");
for(i=0;i<=2;i++)
for(j=0;j<=2;j++)
printf("%d  sum[i][j]");
return 0;
}