#include<stdio.h>
int a[20][20],vis[20],top=-1,stack[20];
int delete();
void dfs(int s,int n);
void push(int item);
int pop();
void main()
{
int n,i,s,ch,j;
char c,dummy;
printf("enter the number vertices:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("enter 1 if %d has a node with %d else 0",i,j);
scanf("%d",&a[i][j]);
}
}
printf("the adjacency matrix is \n");
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d",a[i][j]);
}
printf("\n");
}
do
{
for(i=1;i<=n;i++)
vis[i]=0;
printf("\nmenu");
printf("\ndfs");
printf("\nenter your choice");
scanf("%d",&ch);
printf("enter the souce vertex:");
scanf("%d",&s);
switch(ch)
{
case 1: dfs(s,n);
break;
}
printf("do you want to continue (y/n)?:");
scanf("%c",&dummy);
scanf("%c",&c);
}
while((c=='y')||(c=='Y'));
}
void dfs(int s,int n)
{
int k,i;
push(s);
vis[s]=1;
k=pop();
if(k!=0)
printf("%d",k);
while(k!=0)
{
for(i=1;i<=n;i++)
if((a[k][i]!=0)&&(vis[i]==0))
{
push(i);
vis[i]=	1;
}
k=pop();
if(k!=0)
printf("%d",k);
}
for(i=1;i<=n;i++)
if(vis[i]==0)
dfs(i,n);
}
void push(int item)
{
if(top==19)
printf("stack overflow");
else
stack[++top]=item;
}
int pop()
{
int k;
if(top==-1)
return(0);
else
{
k=stack[top--];
return (k);
}
}




