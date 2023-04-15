#include<stdio.h>
#include<stdlib.h>
struct node{
        int data;
        struct node *next;
};
void search(struct node *n,int x);
void main(){
    int a;
    struct node *head,*temp,*node1,*node2,*node3,*node4;
    node1 = (struct node *)malloc(sizeof(struct node));
    node2 = (struct node *)malloc(sizeof(struct node));
    node3 = (struct node *)malloc(sizeof(struct node));
    node4 = (struct node *)malloc(sizeof(struct node));
    head = node1;
    node1->data = 4;
    node1->next = node2;
    node2->data = 3;
    node2->next = node3;
    node3->data = 5;
    node3->next = node4;
    node4->data = 6;
    node4->next = NULL;
    printf("Enter element to search: ");
    scanf("%d",&a);
    search(head,a);
}
void search(struct node*n,int x){
    struct node *temp;
    temp = n;
    int count = 1;
    while(temp != NULL){
        if(temp->data == x){
            printf("Element position in the list is %d",count);
            break;
        }
     temp = temp->next;
     count++;

    }
    if(temp == NULL)
    printf("element not found");
}

