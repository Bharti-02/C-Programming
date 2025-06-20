#include<stdio.h>
#include<string.h>


int main(){
    char s1[100],s2[100];
    printf("Enter string ");
    gets(s1);
    printf("enter the string");
    gets(s2);
    strcat(s1,s2);
    printf("concatnated string %s",s1);
    return 0;
}