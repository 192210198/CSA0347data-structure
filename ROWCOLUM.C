#include<stdio.h>
void main()
{
static int array[10][10];
int i,j,m,n,sum=0;
printf("enter a order of matrix:");
scanf("%d%d",&m,&n);
printf("enter the co-effecient of matrix:");
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
{
scanf("%d",&array[i][j]);
}
}
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
{
sum=sum+array[i][j];
}
printf("sum of the matrix %d=%d:",i,sum);
sum=0;
}
sum=0;
for(i=0;i<m;++i)
{
for(j=0;j<n;++j)
{
sum =sum+array[i][j];
}
printf("sum of the matrix %d =%d:",j,sum);
sum=0;
}
}
getch();
