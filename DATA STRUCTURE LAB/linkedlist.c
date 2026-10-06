#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *link;
};
struct node *head=NULL;
void insertfirst(){
struct node *newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n no space available\n");
return;
}

printf("\n Enter the value to insert to front:\n");
scanf("%d",&newnode->data);
if(head==NULL)
{
head=newnode;
}
else{
newnode->link=head;
head=newnode;
}
printf("\nElement inserted %d",newnode->data);
}
void insertlast(){
struct node *temp=head,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(newnode==NULL)
{
printf("\n No spce available\n");
return;
}
newnode->link=NULL;
printf("\n Enter the element to insert last\n");
scanf("%d",&newnode->data);
if(head==NULL){
head=newnode;
}
else{
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=newnode;
}
printf("\n Element insert Sucessfully %d\n",newnode->data);
}
void insertlocation(){
int key;
struct node *temp=head,*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
if(head==NULL){
printf("\n No space available\n");
return;
}
newnode->link=NULL;
if(head==NULL)
{
printf("\n List empty\n");
return;
}
printf("\n Enter the key where after you want to add element\n");
scanf("%d",&key);
while(temp!=NULL && temp->data!=key){
temp=temp->link;
}
if(temp==NULL){
printf("\n Value not exist\n");
return;
}
printf("\n Enter the element to inserted:\n");
scanf("%d",&newnode->data);
newnode->link=temp->link;
temp->link=newnode;
printf("value inserted succesfully %d",newnode->data);
}
void delefirst()
{
struct node *temp=head;
if(head==NULL){
printf("\n List Empty\n");
return;
}
head=temp->link;
printf("\n value deleted %d\n",temp->data);
free(temp);
}
void delelast(){
struct node *temp=head,*prev=NULL;
if(head==NULL)
{
printf("Empty list\n");
return;
}
if(temp->link==NULL)
{
printf("\n value %d deleted \n",temp->data);
head=NULL;
free(temp);
return;
}
while(temp->link!=NULL)
{
prev=temp;
temp=temp->link;
}
printf("\n value %d deleted \n",temp->data);
free(temp);
}
void delelocation(){
int key;
struct node *temp=head,*prev=NULL;
if(head==NULL)
{
printf("\n Empty lsit\n");
return;
}
printf("\n Enter the key that you want to delete\n");
scanf("%d",&key);
if(temp->data==key){
head=temp->link;
printf("\n value %d is deleted \n",temp->data);
free(temp);
return;
}
while(temp!=NULL && temp->data!=key)
{
prev=temp;
temp=temp->link;
}
if(temp==NULL)
{
printf("\n value not exist\n");
return;
}
prev->link=temp->link;
printf("value %d is deleted ",temp->data);
free(temp);
}
void search()
{
struct node *temp=head;
int pos=0,found=0,val;
if(head==NULL)
{
printf("\n empty list\n");
return;
}
printf("\n Enter the value to search:");
scanf("%d",&val);
while(temp!=NULL)
{
if(temp->data==val){
printf("%d value found at location %d\n",temp->data,pos+1);
found=1;
}
pos++;
temp=temp->link;
}
if(!found)
{
printf("value %d not exist",val);
}
}
void display()
{
struct node *temp=head;
if(temp==NULL)
{
printf("\n list empty");
return;
}
printf("\nElement in the list\n");
while(temp!=NULL)
{
printf("%d \t",temp->data);
temp=temp->link;
}
}
void main()
{
int choice;
printf("\nSingly Linked List\n");
do{
printf("\n\n1->Insert First\n2->Insert Last\n3->Insert Location\n4->Delete First\n5->Delete Last\n6->Delete Location\n7->Search\n8->Display\n9->Exit"); 
printf("\nEnter your Choice:\n");
scanf("%d",&choice);
switch(choice)
{
case 1:insertfirst();
break;
case 2:insertlast();
break;
case 3:insertlocation();
break;
case 4:delefirst();
break;
case 5:delelast();
break;
case 6:delelocation();
break;
case 7:search();
break;
case 8:display();
break;
case 9:printf("\nExit\n");
break;
default:printf("Invalid choice\n");
}
}
while(choice!=9);
}

 


