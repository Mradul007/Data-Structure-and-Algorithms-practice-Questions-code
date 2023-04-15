#include<stdio.h>
void main(){
int arr[] = {7,8,9,6},i,n,swap;
int *B_addr,*L_addr; //pointer for base address and last address
int length;
length = sizeof(arr)/sizeof(arr[0]);
B_addr = &arr[0];
L_addr = B_addr + (length - 1); // calculate the address of last element
while(B_addr<L_addr){
    swap = *B_addr;
    *B_addr = *L_addr;
    *L_addr = swap;
    B_addr++;
    L_addr--;
}
printf("Array in reverse order");
for(i=0;i< length;i++){
    printf(" %d ",arr[i]);
}
}
