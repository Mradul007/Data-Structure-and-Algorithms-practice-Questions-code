#include<stdio.h>
#include<stdlib.h>
void pairWiseSwap();
struct node{
    int data;
    struct node *link;
};struct node *head,*newnode,*temp;
void main(){
head = 0;
int i,length;
printf("Enter the number of nodes in the lists: ");//enter the number of nodes
scanf("%d",&length);
//loop to create linked list
for(i=1;i<=length;i++){
        newnode = (struct node *)malloc(sizeof(struct node));//creating a single node
        printf("Enter data in list 1: ");
        scanf("%d",&newnode->data);// entering data in the list
        newnode -> link = NULL;
if(head == 0){
        head = temp = newnode;
}
else{
   temp->link = newnode;
   temp = newnode;
}
}
pairWiseSwap();
temp = head;//displaying  the list
for(i=1;i<=length;i++){
        printf("Data = %d\n",temp->data);
        temp = temp-> link;
}
}
/* Function to pairwise swap elements of a linked list */
void pairWiseSwap(){
    temp = head;
    /* Traverse further only if there are at-least two nodes left */
    while (temp != NULL && temp->link != NULL) {
        /* Swap data of node with its next node's data */
        int a;
        a = temp->data;
        temp->data = temp->link->data;
        temp->link->data = a;
        /* Move temp by 2 for the next pair */
        temp = temp->link->link;
    }
}
