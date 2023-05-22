#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *fwd;
    struct node *back;

};struct node *head,*newnode,*temp;
void main(){
head = 0;
int n,i,l;
printf("Enter the number of nodes: ");//enter the number of nodes
scanf("%d",&n);
//loop to create linked list
for(i=1;i<=n;i++){
        newnode = (struct node *)malloc(sizeof(struct node));//creating a single node
        printf("Enter data in list: ");
        scanf("%d",&newnode->data);// entering data in the list
        newnode -> fwd = NULL;
        newnode -> back = NULL;
if(head == 0){
        head = temp = newnode;
}
else{
   temp->fwd = newnode;
   newnode->back = temp;
   temp = newnode;
}
}
temp = head;
printf("Head = %d\n",head);
for(i=1;i<=n;i++){
    printf("Data = %d Back = %d current address = %d forward = %d\n",temp->data,temp->back,&temp->data,temp->fwd);
    temp = temp->fwd;
}
}
