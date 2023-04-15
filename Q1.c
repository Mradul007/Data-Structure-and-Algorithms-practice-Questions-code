#include<stdio.h>
void create(int x); //function to create database
void search(int y,int z);
void sort(int n);
void add(int n,int k);
struct database{
    int emp_id;
    char emp_name[20];
    char emp_city[20];
};struct database data[100];
void main(){
int i,j,n,k,choice=0;
n=5;
create(n);
printf("If you want to add more enter 1: ");
scanf("%d",&choice);
if(choice == 1){
    printf("Enter the number of records to add: ");
    scanf("%d",&k);
    add(n,k);
}
if(choice == 1){
    n=n+k;
}
sort(n);
for(i=0;i<n;i++){
    printf("%d %s %s\n",data[i].emp_id,&data[i].emp_name,&data[i].emp_city);
}
printf("Enter employee Id to search: ");
scanf("%d",&j);
search(j,n);
}
//function to create database
void create(int x){
int i;
for(i = 0;i < x;i++){
    printf("\nEnter the employee Id: ");
    scanf("%d",&data[i].emp_id);
    printf("Enter the employee name: ");
    scanf("%s",&data[i].emp_name);
    printf("Enter the employee city: ");
    scanf("%s",&data[i].emp_city);
}
}
//function to search employee
void search(int y,int z){
    int i;
    for(i=0;i < z;i++){
    if(data[i].emp_id == y){
        printf("%d %s %s\n\n",data[i].emp_id,&data[i].emp_name,&data[i].emp_city);
    }
    }
}
//function to sort the database
void sort(int n){
int i,j,min_idx;
struct database temp;
for(i=0;i<n-1;i++){
    min_idx = i;
    for(j=i+1;j<n;j++){
            if(data[j].emp_id < data[min_idx].emp_id){
                    min_idx = j;
            }
    }
    temp = data[min_idx];
    data[min_idx] = data[i];
    data[i] = temp;
}
}
//function to add in database
void add(int n,int k){
int i;
for(i = n;i < n+k;i++){
    printf("\nEnter the employee Id: ");
    scanf("%d",&data[i].emp_id);
    printf("Enter the employee name: ");
    scanf("%s",&data[i].emp_name);
    printf("Enter the employee city: ");
    scanf("%s",&data[i].emp_city);
}
}

