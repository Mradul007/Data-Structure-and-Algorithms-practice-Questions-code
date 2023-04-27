#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *sorted_merge(struct node *a,struct node *b);
void main(){
struct node *head1,*head2,*newnode1,*newnode2,*temp1,*temp2,*result,*temp;
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
result = sorted_merge(head1,head2);
temp = result;
while (temp!=NULL)
	{
		printf(" Data = %d \n", temp->data);
		temp = temp->link;
	}
}
struct node *sorted_merge(struct node *a,struct node *b){
    struct node dummy;
    struct node *temp;
    temp = &dummy;
    dummy.link = NULL;
    while(1){
        if (a == NULL){
            temp->link = b;
            break;
        }
        else if (b == NULL){
            temp-> link = a;
            break;
        }
        if(a->data <= b->data){
            temp->link = a;
            a = a->link;
        }
        else{
            temp->link = b;
            b = b->link;
        }
        temp = temp ->link;
    }
   return(dummy.link);
}


