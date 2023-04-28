#include<stdio.h>
#include<stdlib.h>
void segregate_even_odd_numbers();
struct node{
    int data;
    struct node *link;
};struct node *head,*newnode,*temp;
void main(){
head = 0;
int i,length;
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
segregate_even_odd_numbers();
temp = head;//displaying  the list
for(i=1;i<=length;i++){
        printf("Data = %d\n",temp->data);
        temp = temp-> link;
}
}
void segregate_even_odd_numbers(){
    struct node *prev,*end;
    end = head;
    prev = NULL;
    temp = head;
while(end->link != NULL){
        end = end->link;
}
struct node *new_end;
new_end = end;
while (temp->data %2 != 0 && temp != end)
    {
        new_end->link = temp;
        temp = temp->link;
        new_end->link->link = NULL;
        new_end = new_end->link;
    }
     if (temp->data%2 == 0)
    {
        /* Change the head pointer to point to first even node */
        head= temp;

        /* now current points to the first even node */
        while (temp != end)
        {
            if ( (temp->data)%2 == 0 )
            {
                prev = temp;
                temp = temp->link;
            }
            else
            {
                /* break the link between prev and temp */
                prev->link = temp->link;

                /* Make link of temp as NULL  */
                temp->link = NULL;

                /* Move temp to end */
                new_end->link = temp;

                /* make temp as new end of list */
                new_end = temp;

                /* Update current pointer to next of the moved node */
                temp = prev->link;
            }
        }
    }

    /* We must have prev set before executing lines following this
       statement */
    else prev = temp;

    /* If there are more than 1 odd nodes and end of original list is
      odd then move this node to end to maintain same order of odd
      numbers in modified list */
    if (new_end!=end && (end->data)%2 != 0)
    {
        prev->link = end->link;
        end->link = NULL;
        new_end->link = end;
    }

}
