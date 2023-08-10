#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
struct node
{
 int data;
 struct node*next;
};
struct node*head,*middle,*last;
struct node*temp=head;
clrscr();
head=malloc(sizeof(struct node));
middle=malloc(sizeof (struct node));
last=malloc(sizeof(struct node));
head->data=10;
middle->data=20;
last->data=30;
head->next=middle;
middle->next=last;
last->next=NULL;
temp=head;
while(temp!=0)
{
printf("%d->",temp->data);
temp=temp->next;
}
printf("NULL");
getch();
return 0;
}