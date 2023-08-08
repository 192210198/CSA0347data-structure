#include<stdio.h>
#include<conio.h>)
int fibonacci(int);
int main();
{
int n,i;
printf("enter the number of elements");
scanf("%d",&n);
printf("fibonacci series is : \n");
for(i=0;i<n;i++)
{
printf("&d \n", fibonacci(i));
}
getch();
}
int fibonacci(int i)
{
if(i==0) return 0;
else if(i==1) return 1;
else return(fibonacci(i-1)+fibonacci(i-2));
}