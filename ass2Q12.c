#include<stdio.h>
#include<stdlib.h>
void insert(int k ,int n);
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
if(n == 0){
    printf("The list is empty\n");
    l=1;
}
else{
        printf("Enter the position where node will be inserted: ");
        scanf("%d",&l);
}
if(l > n+1){
    printf("Invalid Input(no new node can be inserted)\n"); // input value of position is invalid when it is more than n+1
}
else{
        insert(l,n);
        n= n+1;
}
temp = head;
printf("Head = %d\n",head);
for(i=1;i<=n;i++){
    printf("Data = %d Back = %d current address = %d forward = %d\n",temp->data,temp->back,&temp->data,temp->fwd);
    temp = temp->fwd;
}
}
void insert(int k ,int n){
    int i;
    printf("Enter the data in the node: ");
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    scanf("%d",&p->data);
    if(head == NULL){
        head = p;
        p -> fwd = NULL;
        p -> back = NULL;
    }
    else{//to insert node in beginning
    if(k == 1){
    temp = head;
    head = p;
    p->fwd = temp;
    temp->back = p;
    p->back = NULL;
    }
    //to insert node in last
    else if(k == n+1){
            temp = head;
            while(temp->fwd != NULL){
                temp = temp->fwd;
            }
    temp->fwd = p;
    p->back = temp;
    p->fwd = NULL;
    }
    //to insert node in between
    else {
        temp = head;
            for(i=1;i < k - 1;i++){
                temp = temp->fwd;
    }
    p->fwd = temp-> fwd;
    temp->fwd->back = p;
    temp->fwd = p;
    p->back =temp;
    }
    }
}

