#include<stdio.h>
#include<string.h>
struct record{
   char str[50];
};
void sort(int n);
struct record arr[100];
void main(){
char f_name[50],m_name[50],s_name[50],ph_num[50];
int i,j;
for(i=0;i<5;i++){
printf("Enter the full name and phone number: ");
scanf("%s %s %s %s",&s_name,&f_name,&m_name,&ph_num);
sprintf(arr[i].str,"%s,%c.%c %s",s_name,f_name[0],m_name[0],ph_num);
}
sort(5);
for(j=0;j<5;j++){
        printf("%s\n",arr[j].str);
}
}
void sort(int n){
int i,j,min_idx;
struct record temp;
for(i=0;i<n-1;i++){
    min_idx = i;
    for(j=i+1;j<n;j++){
            if(arr[j].str[0] < arr[min_idx].str[0]){
                    min_idx = j;
            }
    }
    temp = arr[min_idx];
    arr[min_idx] = arr[i];
    arr[i] = temp;
}
}
