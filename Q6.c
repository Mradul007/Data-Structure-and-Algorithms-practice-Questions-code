#include<stdio.h>
struct booklist{
    char title[50];
    char author[50];
    int pages;
    float price;
    int sold_copies;
    float amount_soldcopies;
};
void main(){
struct booklist book[100];
int count,n,j,k,i;
float sum=0;
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++){
    printf("Title of book: ");
    scanf("%s",&book[i].title);
    printf("Author of book: ");
    scanf("%s",&book[i].author);
    printf("Pages of book: ");
    scanf("%d",&book[i].pages);
    printf("Price of book: ");
    scanf("%f",&book[i].price);
    printf("No. of sold copies of book: ");
    scanf("%d",&book[i].sold_copies);
    book[i].amount_soldcopies = book[i].price*book[i].sold_copies;
}

for(i=0;i<n;i++){
        printf(" %s %s %d %f %d %f\n",book[i].title,book[i].author,book[i].pages,book[i].price,book[i].sold_copies,book[i].amount_soldcopies);
}
int max = book[0].pages;
for(i=0;i<n;i++){
    if(book[i].pages > max){
        max = book[i].pages;
        j=i;
    }
}
printf(" The book with maximum pages: \n");
printf(" %s %s %d %f %d %f",book[j].title,book[j].author,book[j].pages,book[j].price,book[j].sold_copies,book[j].amount_soldcopies);
int min = book[0].price;
for(i=0;i<n;i++){
    if(book[i].price < min){
        min = book[i].price;
        k=i;
    }
}
printf("\n The book with minimum price: \n");
printf(" %s %s %d %f %d %f",book[k].title,book[k].author,book[k].pages,book[k].price,book[k].sold_copies,book[k].amount_soldcopies);
for(i=0;i<n;i++){
       sum=sum+book[i].amount_soldcopies;
}
printf("\nTotal money earned: %f",sum);
}

