#include<stdio.h>
void main(){
int arr[]={0,1,1,2,3,5,2,5,7},i,j;
int length = sizeof(arr)/sizeof(arr[0]); // length of array
int freq[length]; // array to store frequency of element
for(i=0;i<length;i++){
    int count = 1;
    for(j=i+1;j<length;j++){
     if(arr[i] == arr[j]){
        count++;
        freq[j]= -1; // to avoid counting same element again
     }
    }
    if (freq[i] != -1){
        freq[i] = count;
    }
}
for(i=0;i<length;i++){
    if(freq[i] != -1){
        printf("Element = %d frequency = %d\n",arr[i],freq[i]);
    }
}
}
