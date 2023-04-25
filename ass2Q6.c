#include<stdio.h>
#include<stdlib.h>
void compare(int x);
struct node{
    int data;
    struct node *link;
};struct node *head1,*head2,*newnode1,*newnode2,*temp1,*temp2;
void main(){
head1 = 0;
head2 = 0;
int i,length;
printf("Enter the number of nodes in the lists: ");//enter the number of nodes
scanf("%d",&length);
//loop to create linked list
printf("Enter the elements of list 1\n");
for(i=1;i<=length;i++){
        newnode1 = (struct node *)malloc(sizeof(struct node));//creating a single node
        printf("Enter data in list 1: ");
        scanf("%d",&newnode1->data);// entering data in the list
        newnode1 -> link = NULL;
if(head1 == 0){
        head1 = temp1 = newnode1;
}
else{
   temp1->link = newnode1;
   temp1 = newnode1;
}
}
printf("Enter the elements of list 2\n");
for(i=1;i<=length;i++){
        newnode2 = (struct node *)malloc(sizeof(struct node));//creating a single node
        printf("Enter data in list 2: ");
        scanf("%d",&newnode2->data);// entering data in the list
        newnode2 -> link = NULL;
if(head2 == 0){
        head2 = temp2 = newnode2;
}
else{
   temp2->link = newnode2;
   temp2 = newnode2;
}
}
compare(length);
}
void compare(int x){
int i,j,k = 0;
temp1 = head1;
for(i=1;i<=x;i++){
        temp2 = head2;
        for(j=1;j<=x;j++){
            if(temp1->data == temp2->data){
                printf("Common Data = %d\n",temp1->data);
                k = 1;
            }
           temp2 = temp2->link;
        }
        temp1 = temp1->link;
}
if(k ==0 ){
    printf("Lists have not common elements");
}
}
