#include<stdio.h>
void main(){
int i,j,m,n,arr[50][50],count,size;
count=0;
printf("Enter the number of rows and columns of matrix: \n");
scanf("%d %d",&m,&n);
size= m*n;
printf("Enter the elements of matrix: \n");
//reading matrix elements
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf(" %d ",arr[i][j]);
    }
    printf("\n");
}
// checking the matrix is sparse or not?
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
            //counting no of zeros in the matrix
        if(arr[i][j] == 0){
            count++;
        }
    }
}
if(count > (size/2)){
    printf("Given matrix is the sparse matrix ");
}
else{
    printf("Matrix is not sparse matrix");
}
}
