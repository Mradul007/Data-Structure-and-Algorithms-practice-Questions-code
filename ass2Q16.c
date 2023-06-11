#include<stdio.h>
#include<stdlib.h>
void reverse();
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
temp->link = head;
printf("List in normal order\n");
printf("Head = %d\n",head);
temp = head;
for(i=1;i<=n;i++){//displaying list in normal order
        printf("Data = %d Address = %d Link = %d\n",temp->data,&temp->data,temp->link);
        temp = temp-> link;
}
reverse();
printf("List in reverse order\n");
printf("Head = %d\n",head);
temp = head;
for(i=1;i<=n;i++){//displaying list in reverse order
        printf("Data = %d Address = %d Link = %d\n",temp->data,&temp->data,temp->link);
        temp = temp-> link;
}
}
void reverse(){
    struct node *prev,*next;
    temp = head;
    do{
        next = temp->link;
        temp->link = prev;
        prev = temp;
        temp = next;
    }while(temp != head);
    head -> link = prev;
    head = prev;
}
