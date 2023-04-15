#include<stdio.h>
#include<string.h>
void main(){
char line[],word[];
printf("Enter the line: ");
gets(line);
printf("Enter the word: ");
gets(word);
char *str1,*str2,*temp;
str1 = &line[0];
str2 = &word[0];
while(*str1 != '\0' ){
        temp = str1;
    while(*str2 = '\0'){
            if(*str1 == *str2){
              str1++;
              str2++;
            }
        }
      if(str2 != &word[0]){
        str2--;
      }
      str1++
    }
}

}
