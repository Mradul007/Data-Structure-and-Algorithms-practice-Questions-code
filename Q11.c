#include<stdio.h>
#include<stdlib.h>
void main(){
int *ptr;
ptr = (int *) malloc(10*sizeof(int));
int i;
printf("Enter elements in array: ");
for(i=0;i<10;i++){
    scanf("%d",&ptr[i]);
}
for(i=0;i<10;i++){
    printf(" %d ",ptr[i]);
}
}
