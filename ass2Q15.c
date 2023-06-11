#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};struct node *head,*newnode,*temp;
void main(){
head = 0;
int n,i,choice = 1,run =1;

//loop to create linked list
while(choice){
        newnode = (struct node *)malloc(sizeof(struct node));//creating a single node
        printf("Enter data in list: ");
        scanf("%d",&newnode->data);// entering data in the list
        newnode -> link = NULL;
if(head == 0){
        head = temp = newnode;
}
else{
   temp->link = newnode;
   temp = newnode;
}
printf("Enter 1 else 0 if you want to add new node: ");
scanf("%d",&choice);
}
temp->link = head;
temp = head;
while(run){
    n++;
    if(temp->link == head){
        break;
    }
    temp = temp->link;
}
printf("Number of nodes = %d",n);
}
