#include<stdio.h>
void main(){
    int i,j,k,m,n,p,q,A[50][50],B[50][50],M[50][50],S[50][50];
    printf("Enter rows of matrix A: ");
    scanf("%d",&m);
    printf("\nEnter column of matrix A: ");
    scanf("%d",&n);
    printf("\nEnter rows of matrix B: ");
    scanf("%d",&p);
    printf("\nEnter column of matrix B: ");
    scanf("%d",&q);
    if(m != p || n != q){
        printf("Addition is not possible\n");
        if(n==p){
            printf("Enter elements of Matrix A: ");
            for(i=0;i<m;i++){
                    for(j=0;j<n;j++){
                        scanf("%d",&A[i][j]);
                        }
            }
            printf("Enter elements of Matrix B: ");
            for(i=0;i<p;i++){
                    for(j=0;j<q;j++){
                        scanf("%d",&B[i][j]);
                        }
            }
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        M[i][j]=0;
                    for(k=0;k<q;k++){
                        M[i][j]+=A[i][k]*B[k][j];
                    }
                }
            }
        }
        else{
            printf("Multiplication is not possible");
        }
    }
    if(m == p && n==q ){
            printf("Enter elements of Matrix A: ");
            for(i=0;i<m;i++){
                    for(j=0;j<n;j++){
                        scanf("%d",&A[i][j]);
                        }
            }
            printf("Enter elements of Matrix B: ");
            for(i=0;i<p;i++){
                    for(j=0;j<q;j++){
                        scanf("%d",&B[i][j]);
                        }
            }
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        S[i][j]=A[i][j]+B[i][j];
                    }
                }
            if(p == n){
                for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        M[i][j]=0;
                    for(k=0;k<q;k++){
                        M[i][j]+=A[i][k]*B[k][j];
                    }
                }
            }
            }
            else{
                printf("Multiplication is not possible\n");
            }
    }
    if(m==p && n==q){
    printf("Sum of matrix A+B =\n");
    for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                        printf(" %d",S[i][j]);
                    }
                    printf("\n");
    }
    }
    if (p==n){
            printf("multiplication of matrix A*B=\n");
    for(i=0;i<m;i++){
                for(j=0;j<q;j++){
                       printf(" %d",M[i][j]);
                    }
                    printf("\n");
    }
    }
}

