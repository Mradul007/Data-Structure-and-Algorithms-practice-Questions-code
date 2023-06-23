#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};struct node *head,*newnode,*temp;
void main(){
    struct node *p;
head = 0;
int n,i,k,run=1;
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
if(n == 0){
    printf("List is empty no node present\n");
}
else{
printf("Enter the node position where the last node should point to: ");
scanf("%d",&k);
p = head;
if(k == 0){
    p = NULL;
}
else{
for(i=1;i<k;i++){
    p = p -> link;
}
}
temp->link = p;
}
temp = head;
while(run){
        if(temp == p){
            printf("Node where last node points: Data = %d Address = %d Link = %d\n",temp->data,&temp->data,temp->link);
            break;
        }
    temp = temp->link;
}
temp = head;
printf("Head = %d\n",head);
for(i=1;i<=n;i++){
    printf("Data = %d Address = %d Link = %d\n",temp->data,&temp->data,temp->link);
    temp = temp-> link;
}
}
