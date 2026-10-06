#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *top=NULL;
void push(){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n no space available\n");
return;
}
newnode->link=NULL;
printf("\n Enter the element to insert :\n");
scanf("%d",&newnode->data);
if(top==NULL)
{
top=newnode;
}
else{
newnode->link=top;
top=newnode;
}
printf("\nElement inserted %d",newnode->data);
}

void pop()
{
struct node *temp=top;
if(top==NULL){
printf("\n Stack under flow\n");
return;
}
printf("\n value deleted %d\n",temp->data);
top=temp->link;
free(temp);
}
void peek(){
struct node *temp=top;
if(top==NULL)
{
printf("Stack under Flow\n");
return;
}
printf("top element is %d \n",temp->data);
}
void display()
{
struct node *temp=top;
if(temp==NULL)
{
printf("\n No Element");
return;
}
printf("\nElement in the Stack are:\n");
while(temp!=NULL)
{
printf("%d \t",temp->data);
temp=temp->link;
}
}
void search()
{
struct node *temp=top;
int key,found=0;
if(top==NULL)
{
printf("\n Stack underflow\n");
return;
}
printf("\n Enter the element to search:");
scanf("%d",&key);
while(temp!=NULL)
{
if(temp->data==key){
printf("%d Element founded \n",temp->data);
found=1;
}
temp=temp->link;
}
if(!found)
{
printf("value %d not exist",key);
}
}

void main()
{
int choice;
printf("\n***Stack***\n");
do{
printf("\n\n1->Push\n2->Pop\n3->Peek\n4->Display\n5->Search\n6->Exit"); 
printf("\nEnter your Choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:push();
break;
case 2:pop();
break;
case 3:peek();
break;
case 4:display();
break;
case 5:search();
break;
case 6:printf("\nExit\n");
break;
default:printf("Invalid choice\n");
}
}
while(choice!=6);
}

 


