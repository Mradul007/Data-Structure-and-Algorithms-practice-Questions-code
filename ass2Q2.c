#include<stdio.h>
#include<stdlib.h>
void insert(int k, int n);
struct node{
    int data;
    struct node *link;
};struct node *head,*newnode,*temp;
void main(){
head = 0;
int n,i,k = 0;
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
    printf("List is empty\n");
    k=1;
}
else{
        printf("Enter position of node where new node will be inserted: ");
        scanf("%d",&k);
}
if(k > n+1){
    printf("Invalid Input(no new node can be inserted)\n"); // input value of position is invalid when it is more than n+1
}
else{
        insert(k,n);
        n= n+1;
}
temp = head;//displaying  the list
printf("Head = %d\n",head);
for(i=1;i<=n;i++){
        printf("Data = %d Address = %d Link = %d\n",temp->data,&temp->data,temp->link);
        temp = temp-> link;
}
}
void insert(int k, int n){
    int i;
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    printf("Enter data in node: ");
    scanf("%d",&p->data);// entering data in the node to be inserted
    if(head == NULL){
        head = p;
        p-> link = NULL;
    }
    //to insert node in beginning
    else{
    if(k == 1){
    temp = head;
    head = p;
    p->link = temp;
    }
    //to insert node in last
    else if(k == n+1){
            temp = head;
            while(temp->link != NULL){
                temp = temp->link;
            }
    temp->link = p;
    p->link = NULL;
    }
    //to insert node in between
    else {
        temp = head;
            for(i=1;i < k - 1;i++){
                temp = temp->link;
    }
    p->link = temp-> link;
    temp-> link = p;
    }
    }
}
