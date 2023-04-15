#include<stdio.h>
int find(int x);
void main(){
    int n,b;
    printf("Enter the element number:  ");
    scanf("%d",&n);
    b = find(n);
    printf("%d th element is %d",n,b);
}
int find(int x){
    int S;
  if(x == 1){
    return 0;
  }
  else if(x == 2){
    return 1;
  }
  else {
    S = find(x-1) + find(x-2);
    return S;
  }
}
