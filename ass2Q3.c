#include<stdio.h>
#include<stdlib.h>
void delete_node(int l, int n);
struct node{
    int data;
    struct node *link;
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
        newnode -> link = NULL;
if(head == 0){
        head = temp = newnode;
}
else{
   temp->link = newnode;
   temp = newnode;
}
}
printf("Enter the node to delete: ");
scanf("%d",&l);
if(l > n){
    printf("Invalid Input(no node can be deleted)\n"); // input value of position is invalid when it is more than n
}
else{
        delete_node(l,n);
        n=n-1;
}
temp = head;//displaying  the list
printf("Head = %d\n",head);
for(i=1;i<=n;i++){
        printf("Data = %d Address = %d Link = %d\n",temp->data,&temp->data,temp->link);
        temp = temp-> link;
}
}
void delete_node(int l ,int n){
int i;
 if( head == NULL){//list is empty
    printf("The List is empty deletion is not possible\n");
 }
 else{
    if(l == 1){//deleting node at beginning
        temp = head;
        head = NULL;
        free(temp);
    }
    else if(l == n){//deleting node at end
        temp = head;
        while(temp->link->link != NULL){
            temp = temp->link;
        }
        struct node *p;
        p = temp->link;
        temp->link = NULL;
        free(p);
    }
    else{//deleting node in between
        temp = head;
        for(i = 2;i < l;i++){
            temp = temp->link;
            }
            struct node *p;
            p = temp->link;
            temp-> link = p-> link;
            free(p);
    }
 }
}
