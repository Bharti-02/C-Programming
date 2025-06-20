#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Enter a string");
   gets(str);
   printf(" the length of the string %d:",strlen(str));

    return 0;
}