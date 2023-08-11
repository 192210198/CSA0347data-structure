#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push();
void pop();
void display();
int main()
{
top=-1;
printf(" enter the size of stack[max=100]");
scanf("%d",&n);
printf(" stack operations using array:");
printf(" 1.push 2.pop 3.display 4.exit");
do
{
printf(" enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1;
{
push();
break;
}
case 2;
{
pop();
break;
}
case 3;
{
display ();
break;
}
case 4;
{
printf("exit point");
break;
}
default;
{
printf(" please enter a valid choice(1/2/3/4)");
}
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf(" stack is a overflow");
}
else
{
printf("enter a value to be pushed:);
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=1)
{
printf("stack is under flow");
}
else
{
printf("the popped elements is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("the elements in stack");
for(i=top;i>=0;i++)
printf("%d",stack[i]);
printf("press next choice");
}
else
{
printf(" the stack is empty");
}
}
