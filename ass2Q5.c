#include<stdio.h>
#include<stdlib.h>
void find(int n,int x);
struct node{
    int data;
    struct node *link;
};struct node *head,*newnode,*temp;
void main(){
head = 0;
int n,i,length;
printf("Enter the number of nodes: ");//enter the number of nodes
scanf("%d",&length);
//loop to create linked list
for(i=1;i<=length;i++){
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
printf("Enter the value of N: ");
scanf("%d",&n);
find(n,length);
}
void find(int n, int x){
int i,k;
temp = head;
k = x - n + 1;
for(i=1;i < k;i++){
    temp = temp->link;
}
printf("Data on Nth node from last = %d",temp->data);
}
