#include<stdio.h>
#include<stdlib.h>
void insert(int k, int n);
struct node{
    int data;
    struct node *link;
};struct node *head,*newnode,*temp;
void main(){
head = 0;
int n,i,k;
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
if(head != NULL){
temp->link = head;
}
printf("Enter the position where node to be inserted (enter 1 for 1st node & enter n for last node): ");
scanf("%d",&k);
insert(k,n);
n=n+1;
temp = head;
printf("Head = %d\n",head);
for(i=1;i<=n;i++){
    printf("Data = %d Address = %d Link = %d\n",temp->data,&temp->data,temp->link);
    temp = temp-> link;
}
}
void insert(int k,int n){
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter data in node: ");
    scanf("%d",&p->data);// entering data in the node to be inserted
if(head == NULL){
        head = p;
        p-> link = head;
}
else{
if(k == 1){
        temp = head;
        while(temp->link != head){
            temp = temp->link;
        }
        temp->link = p;
        p->link = head;
        head = p;

}
if(k == n){
    temp = head;
        while(temp->link != head){
            temp = temp->link;
        }
        temp -> link = p;
        p -> link = head;
}
}
}
